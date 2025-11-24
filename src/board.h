#ifndef _BOARD_
#define _BOARD_

#include "square.h"

struct board
{
    FriendlySquare PlayerBoard[10][10] = {{FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}, 
                                          {FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare(), FriendlySquare()}};
    EnemySquare EnemeyBoard[10][10] =    {{EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}, 
                                          {EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(), EnemySquare(),}};
};

#endif