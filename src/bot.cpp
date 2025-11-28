#include "bot.h"
#include "utilFunctions.h"
#include "board.h"
#include "probabilityMask.h"

#include <string>
#include <iostream>
#include <random>
#include <chrono>


std::string getBotMove(board &Board)
{
    //random number gen setup
    std::default_random_engine generator;
    generator.seed(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distribution(1, 1000000);

    bool validAnswer = false;
    int chosenIdx = 0;
    while (validAnswer == false)
    {

        int unsunkShipLoc = unsunkShipLocOnBoard(Board); //will be -1 if no unsunk ship is found
        if (unsunkShipLoc != -1)
        {
            int directions[4] = {1, -1, 10, -10};
            std::cout << unsunkShipLoc << " bot1\n";

            bool foundDir = false;
            for (int dir : directions)
            {
                if (Board.EnemeyBoard[unsunkShipLoc+dir].ship_hit == true && Board.EnemeyBoard[unsunkShipLoc+dir].ship_sunk != true)
                {
                    foundDir = true;
                    std::cout << "bot2\n";
                    int multiplier = 1;
                    bool searching = true;
                    while (searching)
                    {
                        if (Board.EnemeyBoard[unsunkShipLoc+dir*multiplier].ship_hit == true && Board.EnemeyBoard[unsunkShipLoc+dir*multiplier].ship_sunk != true)
                        {
                            multiplier += 1;
                        }
                        else if (Board.EnemeyBoard[unsunkShipLoc+dir*multiplier].hit == true)
                        {   
                            dir-=dir*2; //flips the sign of dir
                            multiplier = 1;
                        }
                        else if (Board.EnemeyBoard[unsunkShipLoc+dir*multiplier].hit != true)
                        {   
                            break;
                        }
                    }
                    chosenIdx = unsunkShipLoc+dir*(multiplier);
                }
            }
            if (foundDir == false)
            {
                chosenIdx = unsunkShipLoc+directions[distribution(generator)%4];
            }
        }
        else
        {
            probabilityMask probabilityMask = createWholeMask(Board);

            chosenIdx = probabilityMask.highestValue.second;
        }
        if (Board.EnemeyBoard[chosenIdx].hit == false)
        {
            validAnswer = true;
        }
    }
    std::string squarePointer = encodeSquareIdx(chosenIdx);

    return squarePointer;
}

































