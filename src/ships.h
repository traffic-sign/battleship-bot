#ifndef _SHIPS_
#define _SHIPS_

#include <utility>

struct ship
{
    bool alive = true;
};

struct carrier : ship
{
    carrier(int startSquare, int endSquare);

    std::pair<int, bool> shipOccupation[5];
};

struct battleship : ship
{
    battleship(int startSquare, int endSquare);

    std::pair<int, bool> shipOccupation[4];
};

struct cruiser : ship
{
    cruiser(int startSquare, int endSquare);

    std::pair<int, bool> shipOccupation[3];
};

struct submarine : ship
{
    submarine(int startSquare, int endSquare);

    std::pair<int, bool> shipOccupation[3];
};

struct destroyer : ship
{
    destroyer(int startSquare, int endSquare);

    std::pair<int, bool> shipOccupation[2];
};


#endif