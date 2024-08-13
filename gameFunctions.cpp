#include "globals.h"
#include "gameFunctions.h"
#include <vector>
#include "objects.h"
#include "sprites.h"
#include "hardware.h"

// Collision detection function
bool collision(vector<ScreenObject*> &objects)
{
    // Initializes the x,y directions for the aliens and the bullet
    int xAlien, yAlien, xBullet, yBullet;
    
    // Declares the position of the bullet
    xBullet = objects.back() -> getX();
    yBullet = objects.back() -> getY();
    
    // Checks if the bullet is in range
    if (yBullet < 10)
    {
        // If not, delete it
        objects.pop_back();
        return false;
    }
    
    // loops through all aliens
    for (int i = 1; i < objects.size() - 1; i++)
    {
        // Declares the position of the alien
        xAlien  = objects[i] -> getX();
        yAlien  = objects[i] -> getY();
        
        // Determines if the bullet and the alien share any pixels
        if (xAlien - 2 <= xBullet && yAlien - 6 <= yBullet && xAlien + ALIEN_WIDTH >= xBullet && yAlien + ALIEN_HEIGHT >= yBullet)
        {
            //Erases the alien
            objects[i] -> setAlive(false);
            objects[i] -> draw();
            
            // Kill the bullet
            objects.pop_back();
            
            // Kill the alien
            objects.erase(objects.begin() + i);
            
            // Erases the bullet
            uLCD.filled_rectangle(xBullet, yBullet, xBullet + 1, yBullet + 5, BLACK);
            return false;
        }
    }
    return true;
}

// Retrieves the ship direction from the accelerometer
int get_action(GameInputs inputs)
{
    //read accelerometer
    //inputs look weird because mbed is sideways
    if      (inputs.ay >  0.4) {return LEFT;   }
    else if (inputs.ay < -0.4) {return RIGHT;  }
    else                       {return STOPPED;}
}

// Initializes the game; this only occurs once
void game_init(vector<ScreenObject*> &objects)
{
    
    objects.push_back(new Ship);
    ScreenObject* alien;
    
    // Creates 6 random aliens in a random x location
    for (int i = 0; i < 6; i++) {
        // Initializes a randomizer for all 4 alien types
        int randNum = rand() % 4;
        
        // Determines which alien was chosen and creates the alien object
        if      (randNum == 0) alien = new Alice  (10 + rand() % (108 - ALIEN_WIDTH), 20 + i * (ALIEN_HEIGHT + 2));
        else if (randNum == 1) alien = new Janice (10 + rand() % (108 - ALIEN_WIDTH), 20 + i * (ALIEN_HEIGHT + 2));
        else if (randNum == 2) alien = new Nathan (10 + rand() % (108 - ALIEN_WIDTH), 20 + i * (ALIEN_HEIGHT + 2));
        else                   alien = new Bob    (10 + rand() % (108 - ALIEN_WIDTH), 20 + i * (ALIEN_HEIGHT + 2));

        // Initializes a randomizer for 2 directions
        randNum = rand() % 2;
        
        // Determines which direction was chose
        if (randNum == 0) alien -> setDir(LEFT);
        else              alien -> setDir(RIGHT);
        
        // Puts the object on the vector
        objects.push_back(alien);
    }
    
    // Draws all objects
    for (int i = 0; i < objects.size(); i++) objects[i] -> draw();
}

// Checks if the game is over and prints the game over screen if it is
bool gameOver(vector<ScreenObject*> &objects, Timer& totalTime)
{
    // Initialize iteration
    int i = 0;
    
    // Do-while loop that checks if there is an alien object
    // If there is, the game is not over; if there is not, the game is over
    do
    {
        //if (objects[i] -> getType() == BOB || objects[i] -> getType() == ALICE || objects[i] -> getType() == NATHAN || objects[i] -> getType() == JANICE) return false;
        if (objects[i] -> getType() == ALIEN) return false;
        i++;
    }
    
    // Loops through all objects
    while (i < objects.size());
    
    // Stops the total time
    totalTime.stop();
    
    // Outputs the endgame screen
    uLCD.cls();
    uLCD.textbackground_color(BLACK);
    uLCD.text_string("CONGRATULATIONS!!",1,5,FONT_7X8,0xFFFF00);
    uLCD.text_string("   EARTH SAVED!  ",1,7,FONT_7X8,0xFFFF00);
    uLCD.text_string("(",4,9,FONT_7X8,0xFFFF00);
    
    // Prints the number of seconds taken to win
    uLCD.printf("%d Seconds)", totalTime.read_ms() / 1000);
    
    // Clears the vector of all objects
    objects.clear();
    return true;
}