#ifndef _SQUARE_
#define _SQUARE_


struct FriendlySquare
{
    int test = 0;
    bool contains_ship;
    bool hit;
};

struct EnemySquare
{
    int test = 0;
    bool ship_hit = false;
    bool ship_sunk = false;
    bool hit = false;
};



#endif
