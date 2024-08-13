#include "objects.h"
#include "sprites.h"
#include "globals.h"
#include "Speaker.h"
#include "hardware.h"

//Creates speaker object
Speaker mySpeaker(p24);

/***** BASE CONSTRUCTOR *****/

ScreenObject::ScreenObject()
{
    w = ALIEN_WIDTH;
    h = ALIEN_HEIGHT;
    alive = true;
    type = ALIEN;
    min = 10;
    max = 118;
}


/***** SETTERS START *****/

void ScreenObject::setType (int a)  {type = a;}
void ScreenObject::setX    (int a)  {x = a;}
void ScreenObject::setY    (int a)  {y = a;}
void ScreenObject::setW    (int a)  {w = a;}
void ScreenObject::setH    (int a)  {h = a;}
void ScreenObject::setDir  (int d)  {dir = d;}
void ScreenObject::setAlive(bool b) {alive = b;}

/***** SETTERS END *****/


/***** GETTERS START*****/

int  ScreenObject::getDir()   const {return dir;}
bool ScreenObject::getAlive() const {return alive;}
int  ScreenObject::getX()     const {return x;}
int  ScreenObject::getY()     const {return y;}
int  ScreenObject::getW()     const {return w;}
int  ScreenObject::getH()     const {return h;}
int  ScreenObject::getType()  const {return type;}
int  ScreenObject::getSpeed() const {return speed;}

/***** GETTERS END *****/


// Update for all aliens
void ScreenObject::update()
{
    // Creates temporary x and y for clearing old alien
    xTemp = x;
    
    // Change bob sprite every time
    if      (sprite == bobUp  ) sprite = bobDown;
    else if (sprite == bobDown) sprite = bobUp;
    
    // If the bounds have not been reached, shift in the correct direction
    if      (getDir() == RIGHT && x <  max - w) x = x + speed;
    else if (getDir() == LEFT  && x >  min)     x = x - speed;
    
    // If the boundaries have been reached, change direction and shift position
    else if (getDir() == RIGHT && x >= max - w)
    {
        setDir(LEFT);
        x = x - speed;
    }
    else if (getDir() == LEFT && x <= min)
    {
        setDir(RIGHT);
        x = x + speed;
    }
}

// Draw for all aliens
void ScreenObject::draw()
{
    // Clears previous alien draw
    if (!alive) uLCD.filled_rectangle(x - speed, y, x + w + speed, y + h, BLACK);
    else        uLCD.filled_rectangle(xTemp, y, xTemp + w, y + h, BLACK);
    
    // Draws updated alien
    if (alive) uLCD.BLIT(x, y, ALIEN_WIDTH, ALIEN_HEIGHT, sprite);
}

/***** SCREENOBJECT FUNCTIONS END  *****/


/***** BOB CONSTRUCTOR *****/

Bob::Bob(int u, int v)
{
    x = u;
    y = v;
    sprite = bobDown;
    speed = 3;
}

/***** BOB CONSTRUCTOR *****/


/***** ALICE CONSTRUCTOR *****/

Alice::Alice(int u, int v)
{
    x = u;
    y = v;
    sprite = alice;
    speed = 5;
}

/***** NATHAN CONSTRUCTOR *****/

Nathan::Nathan(int u, int v)
{
    x = u;
    y = v;
    sprite = nathan;
    speed = 6;
}

/***** JANICE CONSTRUCTOR *****/

Janice::Janice(int u, int v)
{
    x = u;
    y = v;
    sprite = janice;
    speed = 2;
}

/***** SHIP FUNCTIONS START*****/
// Ship constructor
Ship::Ship()
{
    x = 10;
    y = 100;
    w = 15;
    h = 24;
    dir = LEFT;
    type = SHIP;
    speed = 1;
    sprite = ship;
}

// Ship update
void Ship::update()
{
    // If the direction is correct and the boundaries have not been reached, move the ship
    if      (getDir() == RIGHT && x < max - w) x = x + speed;
    else if (getDir() == LEFT  && x > min    ) x = x - speed;
    
    // Otherwise, stop the ship and don't redraw
    else dir = STOPPED;
}

void Ship::draw()
{
    //Only draw if the ship moves
    if (getDir() != STOPPED)
    {
        /*
        // Clear the previous ship
        //uLCD.filled_rectangle(x - speed, y, x + w + speed, y + h, BLACK);
        if      (getDir() == RIGHT) uLCD.filled_rectangle(x - speed, y, x, y + h, BLACK);
        else if (getDir() == LEFT ) uLCD.filled_rectangle(x + w, y, x + w + speed, y + h, BLACK);
        // Draw the current ship
        uLCD.filled_rectangle(x, y, x + w, y + h, BLUE);
        */
        
        uLCD.filled_rectangle(x - speed, y, x + w + speed, y + h, BLACK);
    
        // Draws updated alien
        if (alive) uLCD.BLIT(x, y, w, h, sprite);
    }
}

/***** SHIP FUNCTIONS END  *****/


/***** BULLET FUNCTIONS START*****/
// Bullet constructor
Bullet::Bullet(int u)
{
    x = u;
    y = 100;
    w = 2;
    h = 5;
    type = BULLET;
    speed = 5;
}

// Bullet update
void Bullet::update()
{
    // If the bullet is active, shift it
    if (alive) y = y - speed;
    
    // If the bullet is dead or the boundary is reached, kill it
    if (y < min || !alive)
    {
        alive = false;
        uLCD.filled_rectangle(x, 10, x + w, 15, BLACK);
    }
}

// Bullet draw
void Bullet::draw()
{
    // Clear the previous bullet draw
    uLCD.filled_rectangle(x, y, x + w - 1, y + h + speed, BLACK);
    
    // Draw the current bullet
    if (alive) uLCD.filled_rectangle(x, y, x + w - 1, y + h, RED);
    
    // Play the bullet sound
    if (y == 100 - speed) for (int i = 800; i < 1600; i += 10)  mySpeaker.PlayNote(i,0.005, 0.05);
}

/***** BULLET FUNCTIONS END  *****/