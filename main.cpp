// Project includes
#include "globals.h"
#include "hardware.h"
#include "objects.h"
#include <time.h>
#include <vector>
#include "sprites.h"
#include "gameFunctions.h"
#include "Speaker.h"

// Creates the vector containing all objects (aliens, ship, bullet)
vector<ScreenObject*> objects;

// Time for total time taken to solve
Timer totalTime;

// Flag to determine if a bullet exists or not
bool bullet = false;

// Occurs when the button interrupt is pressed
void pb1_hit_callback (void)
{
    // Occurs if there is no bullet
    if (!bullet)
    {
        // Creates a new bullet
        objects.push_back(new Bullet(objects.front() -> getX() + objects.front() -> getW() / 2));
        
        // Sets the bullet flag to true
        bullet = true;
    }
}

int main()
{
        // First draw for moon and sun
        uLCD.BLIT(20, 20, 30, 30, sun);
        uLCD.BLIT(80, 60, 30, 30, moon);
        
        // Starts a timer for seeding purposes
        totalTime.start();
        
        // Set up interrupts and wait for it to take effect
        button1.mode(PullUp); wait(0.3);
        
        // Setup Interrupt callback functions for a pb hit and wait for it to take effect
        button1.attach_deasserted(&pb1_hit_callback); wait(0.3);
        
        // Start sampling pb inputs using interrupts
        button1.setSampleFrequency();
        
        // First things first: initialize hardware
        ASSERT_P(hardware_init() == ERROR_NONE, "Hardware init failed!");
        wait(0.3);

        // Sets the seed based on timer
        srand(totalTime.read_us());

        // Initialize the game and frame time
        game_init(objects);
        int frameTime = 0;
        
        // Starts the total time for winning time purposes
        totalTime.start();

        // Main game loop
        while(true)
        {
            // Timer to measure game update speed
            Timer t;
            t.start();
            
            // Redraw moon and sun
            uLCD.BLIT(20, 20, 30, 30, sun);
            uLCD.BLIT(80, 60, 30, 30, moon);
            
            // Actually do the game update:
            for (int i = 1; i < objects.size(); i++)
            {
                /***** Read inputs *****/
                GameInputs in = read_inputs();
                
                /***** Determine action *****/
                objects.front() -> setDir(get_action(in));
                
                /***** Update game *****/
                // Check for collision
                if (objects.back() -> getType() == BULLET) bullet = collision(objects);
                
                // Update ship and one alien each time
                objects.front() -> update();
                objects[i]      -> update();
                
                /***** Draw frame *****/
                objects.front() -> draw();
                objects[i]      -> draw();
                
                // Check for collision
                if (objects.back() -> getType() == BULLET) bullet = collision(objects);
            }
            
            /***** Check for game over *****/
            if (gameOver(objects, totalTime)) break;
            
            /***** Frame delay *****/
            // Check current frame time
            int dt = t.read_ms();
            
            // If current frame time is greate than the max frame time, increase the max frame time
            if (dt >= frameTime && dt < 100) frameTime = dt;
            
            // Don't update aliens and check for ship input until the frame ends
            while (frameTime - dt > 0)
            {
                // Periodically update ship
                if (dt % (frameTime/6) == 0)
                {
                    /***** Read inputs *****/
                    GameInputs in = read_inputs();
                    
                    /***** Determine action *****/
                    objects.front() -> setDir(get_action(in));
                    
                    /***** Update game *****/
                    objects.front() -> update();
                    
                    /***** Draw frame *****/
                    objects.front() -> draw();
                }
                
                // Read new frame time
                dt = t.read_ms();
            }
        }
}