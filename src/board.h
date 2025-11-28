#ifndef _BOARD_
#define _BOARD_

#include "square.h"

struct board
{
    EnemySquare EnemeyBoard[100] =    {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), 
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), 
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), 
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), 
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), 
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), 
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), 
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), 
                                          EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare()};

    bool carrierAlive    = true;
    bool battleshipAlive = true;
    bool cruiserAlive    = true;
    bool submarineAlive  = true;
    bool destroyerAlive  = true;
};

#endif
