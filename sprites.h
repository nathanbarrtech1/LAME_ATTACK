#ifndef GRAPHICSCHARS_H
#define GRAPHICSCHARS_H

#define ALIEN_HEIGHT 8
#define ALIEN_WIDTH 11
#define _ 0x000000 //BLACK
#define X 0x00FF00 //WHITE
#define O 0xF3F3F3 //LIGHT GRAY

static int bobDown[ALIEN_HEIGHT * ALIEN_WIDTH] = 
{
    _,_,X,_,_,_,_,_,X,_,_,
    _,_,_,X,_,_,_,X,_,_,_,
    _,_,X,X,X,X,X,X,X,_,_,
    _,X,X,_,X,X,X,_,X,X,_,
    X,X,X,X,X,X,X,X,X,X,X,
    X,_,X,X,X,X,X,X,X,_,X,
    X,_,X,_,_,_,_,_,X,_,X,
    _,_,_,X,X,_,X,X,_,_,_,
};

static int bobUp[ALIEN_HEIGHT * ALIEN_WIDTH] = 
{
    _,_,X,_,_,_,_,_,X,_,_,
    X,_,_,X,_,_,_,X,_,_,X,
    X,_,X,X,X,X,X,X,X,_,X,
    X,X,X,_,X,X,X,_,X,X,X,
    X,X,X,X,X,X,X,X,X,X,X,
    _,_,X,X,X,X,X,X,X,_,_,
    _,_,X,_,_,_,_,_,X,_,_,
    _,X,_,_,_,_,_,_,_,X,_,
};

static int alice[ALIEN_HEIGHT * ALIEN_WIDTH] = 
{
    _,_,_,_,X,X,X,_,_,_,_,
    _,X,X,X,X,X,X,X,X,X,_,
    X,X,X,X,X,X,X,X,X,X,X,
    X,X,X,_,_,X,_,_,X,X,X,
    X,X,X,X,X,X,X,X,X,X,X,
    _,_,_,X,X,_,X,X,_,_,_,
    _,_,X,X,_,_,_,X,X,_,_,
    X,X,_,_,_,X,_,_,_,X,X,
};

static int janice[ALIEN_HEIGHT * ALIEN_WIDTH] =
{
    _,_,_,_,X,_,X,_,_,_,_,
    _,X,X,X,X,X,X,X,X,X,_,
    X,X,X,_,X,_,X,_,X,X,X,
    _,X,X,X,X,_,X,X,X,X,_,
    _,_,X,_,_,_,_,_,X,_,_,
    _,_,X,X,_,X,_,X,X,_,_,
    _,_,_,X,_,_,_,X,_,_,_,
    _,_,_,X,X,X,X,X,_,_,_
};

static int nathan[ALIEN_HEIGHT * ALIEN_WIDTH] =
{
    X,_,_,X,X,X,X,X,_,_,X,
    X,_,X,X,X,_,X,X,X,_,X,
    X,X,X,X,_,_,_,X,X,X,X,
    _,X,X,_,_,X,_,_,X,X,_,
    _,X,X,_,_,X,_,_,X,X,_,
    X,X,X,X,_,_,_,X,X,X,X,
    X,_,X,X,X,_,X,X,X,_,X,
    X,_,_,X,X,X,X,X,_,_,X
};

static int moon[900] =
{
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 
0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 
0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 
0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 
0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 
0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 
0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 
0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 
0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x949090, 0x949090, 0x949090, 0x949090, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000
};

static int sun[900] = 
{
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFB500, 0x000000, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF8800, 0x000000, 0xFF8800, 0xFFB500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFB500, 0xFFB500, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF4500, 0xFF4500, 0xFF4500, 0xFF8800, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFB500, 0xFF8800, 0xFF4500, 0xFF4500, 0xFF8800, 0xFF8800, 0xFF8800, 0xFF8800, 0xFF4500, 0xFF4500, 0x000000, 0x000000, 0xFFB500, 0xFFB500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF8800, 0xFF4500, 0xFF8800, 0xFF8800, 0xFFB500, 0xFFB500, 0xFFB500, 0xFFB500, 0xFF8800, 0xFF8800, 0xFF4500, 0xFF8800, 0xFF8800, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFFB500, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFB500, 0xFFCC00, 0xFFCC00, 0xFFCC00, 0xFFCC00, 0xFFB500, 0xFFB500, 0xFF8800, 0xFF4500, 0xFF8800, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFB500, 0xFFB500, 0xFF8800, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF8800, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0x000000, 
0x000000, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0xFF3A00, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFB500, 0x000000, 0x000000, 
0x000000, 0x000000, 0xFFB500, 0xFFB500, 0xFF8800, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0xFF8800, 0x000000, 0xFFB500, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF3A00, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFB500, 0xFF8800, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0xFF8800, 0xFFB500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFFB500, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFCC00, 0xFFCC00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0xFFCC00, 0xFFCC00, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0xFFB500, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFFB500, 0xFFB500, 0xFFCC00, 0xFFCC00, 0xFFCC00, 0xFFCC00, 0xFFB500, 0xFFB500, 0xFF8800, 0xFF4500, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF4500, 0xFF8800, 0xFF8800, 0xFFB500, 0xFFB500, 0xFFB500, 0xFFB500, 0xFF8800, 0xFF8800, 0xFF4500, 0xFF8800, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFF8800, 0xFF4500, 0xFF4500, 0xFF8800, 0xFF8800, 0xFF8800, 0xFF8800, 0xFF4500, 0xFF4500, 0xFF8800, 0xFFB500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFB500, 0xFFB500, 0x000000, 0x000000, 0xFF4500, 0xFF4500, 0xFF4500, 0xFF4500, 0x000000, 0x000000, 0x000000, 0xFFB500, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0xFAFF00, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFAFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000
};

static int ship[360] =
{
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0xCACACA, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0x9F9F9F, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0x656565, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0x9F9F9F, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0x656565, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x9F9F9F, 0xCACACA, 0x9F9F9F, 0xCACACA, 0x9F9F9F, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0x9F9F9F, 0x9F9F9F, 0x9F9F9F, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0x656565, 0x656565, 0x656565, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
0x000000, 0x000000, 0x9F9F9F, 0x000000, 0xCACACA, 0xCACACA, 0x9F9F9F, 0x9F9F9F, 0x9F9F9F, 0xCACACA, 0xCACACA, 0x000000, 0x9F9F9F, 0x000000, 0x000000, 
0x000000, 0xCACACA, 0xCACACA, 0xFFFF00, 0xCACACA, 0xCACACA, 0x656565, 0x656565, 0x656565, 0xCACACA, 0xCACACA, 0xFFFF00, 0xCACACA, 0xCACACA, 0x000000, 
0x000000, 0x000000, 0x9F9F9F, 0x9F9F9F, 0xFF0000, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0xFF0000, 0x9F9F9F, 0x9F9F9F, 0x000000, 0x000000, 
0xFFFF00, 0x000000, 0x000000, 0x9F9F9F, 0xCACACA, 0xCACACA, 0xCACACA, 0x9F9F9F, 0xCACACA, 0xCACACA, 0xCACACA, 0x9F9F9F, 0x000000, 0x000000, 0xFFFF00, 
0xFFFF00, 0xFF0000, 0x000000, 0x656565, 0xCACACA, 0x656565, 0xCACACA, 0x656565, 0xCACACA, 0x656565, 0xCACACA, 0x656565, 0x000000, 0xFF0000, 0xFFFF00, 
0xFFFF00, 0xFF0000, 0x000000, 0x656565, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0xCACACA, 0x656565, 0x000000, 0xFF0000, 0xFFFF00, 
0xFFFF00, 0xFF0000, 0x000000, 0x656565, 0x000000, 0x9F9F9F, 0x9F9F9F, 0x000000, 0x9F9F9F, 0x9F9F9F, 0x000000, 0x656565, 0x000000, 0xFF0000, 0xFFFF00, 
0xFFFF00, 0xFF0000, 0x000000, 0x656565, 0x000000, 0x000000, 0x9F9F9F, 0x000000, 0x9F9F9F, 0x000000, 0x000000, 0x656565, 0x000000, 0xFF0000, 0xFFFF00, 
0xFFFF00, 0xFFFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x656565, 0x000000, 0x656565, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFF00, 0xFFFF00, 
0x000000, 0xFFFF00, 0xFFFF00, 0x000000, 0x000000, 0x000000, 0x656565, 0x000000, 0x656565, 0x000000, 0x000000, 0x000000, 0xFFFF00, 0xFFFF00, 0x000000, 
0x000000, 0x000000, 0xFFFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFF00, 0x000000, 0x000000, 
0x000000, 0x000000, 0xFFFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFF00, 0x000000, 0x000000
};

#endif