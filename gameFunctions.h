#ifndef GAMEFUNCTIONS_H
#define GAMEFUNCTIONS_H
#include "hardware.h"

/*************************************************************
THE PURPOSE OF GAMEFUNCTIONS IS TO WRITE ALL OF THE NECESSARY
FUNCTIONS FOR THE GAME. THIS HELPS SIMPLIFY THE MAIN AND
MAKE IT MORE READABLE.
*************************************************************/

// Collision detection function
bool collision(vector<ScreenObject*> &objects);

// Retrieves the ship direction from the accelerometer
int get_action(GameInputs inputs);

// Initializes the game; this only occurs once
void game_init(vector<ScreenObject*> &objects);

// Checks if the game is over and prints the game over screen if it is
bool gameOver(vector<ScreenObject*> &objects, Timer& totalTime);

#endif