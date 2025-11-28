#include <iostream>
#include <string>

#include "print.h"
#include "board.h"
#include "utilFunctions.h"
#include "ships.h"
#include "gameloop.h"


int main()
{
    board Board;

    gameloop(Board);

    system("pause");
}
