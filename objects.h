#ifndef OBJECTS_H
#define OBJECTS_H

#define NO_TYPE 0
#define ALIEN   1
#define SHIP    2
#define BULLET  3

/*************************************************************
THE PURPOSE OF OBJECTS IS TO WRITE ALL OF THE NECESSARY
CLASSES/OBJECTS FOR THE GAME. THIS HELPS SIMPLIFY THE MAIN
AND MAKE IT MORE READABLE.
*************************************************************/

// Base class for all objects
class ScreenObject
{ 
    protected:
      // Shared variables
      int  x, xTemp;
      int  y, yTemp;
      int  w;
      int  h;
      int  dir;
      bool alive;
      int  type;
      int* sprite;
      int  speed;
      int  min;
      int  max;
      
     public: 
      // CONSTRUCTOR
      ScreenObject();
      
      // SETTERS
      void setDir  (int  d);
      void setAlive(bool b);
      void setType (int  a);
      void setX    (int  a);
      void setY    (int  a);
      void setW    (int  a);
      void setH    (int  a);

      // GETTERS
      int  getDir()   const;
      bool getAlive() const;
      int  getX()     const;
      int  getY()     const;
      int  getW()     const;
      int  getH()     const;
      int  getSpeed() const;
      int  getType()  const;
      
      // Virtual functions
      virtual void update();
      virtual void draw();
};

// Alien Bob
class Bob: public ScreenObject
{
    private:
      int* direction;
    
    public:
      Bob(int u, int v);
};

// Alien Alice
class Alice: public ScreenObject
{
    public:
      Alice(int u, int v);
};

// Alien Nathan
class Nathan: public ScreenObject
{
    public:
      Nathan(int u, int v);
};

// Alien Janice
class Janice: public ScreenObject
{
    public:
      Janice(int u, int v);
};

#define LEFT    0
#define STOPPED 1
#define RIGHT   2
#define BUTTON  3

// Ship which is th only user-controlled object
class Ship: public ScreenObject
{
    friend class Bullet;
    
    private:
      int direction;
    
    public:
      Ship();
      void update();
      void draw();
};

// Bullet class for when the ship shoots a bullet
class Bullet: public ScreenObject
{ 
    public:
      Bullet(int u);
      void update();
      void draw();
};

#endif