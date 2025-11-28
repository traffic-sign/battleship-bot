#include "gameloop.h"

#include "board.h"
#include "print.h"
#include "bot.h"
#include "utilFunctions.h"
#include "probabilityMask.h"


#include <iostream>
#include <string>

void letPlayerShoot(board &Board)
{

    //gets the player's shot
    std::string shot;

    bool validAnswer = false;
    int square1;
    while (validAnswer == false)
    {
        std::cout << "\nplease select a square to shoot (type \"bot\" to get the bot to shoot a shot): ";
        std::cin >> shot;

        if (shot == "bot")
        {
            shot = getBotMove(Board);
            std::cout << 'a' << shot << 'a';
        }

        square1 = DecodeSquarePointerString(shot, 0);

        if (Board.EnemeyBoard[square1].hit != true)
        {
            Board.EnemeyBoard[square1].hit = true;
            validAnswer = true;
        }
    }
    PrintBoard(Board);

    //determines if the shot was a hit
    bool wasHit;

    validAnswer = false;
    while (validAnswer == false)
    {
        std::cout << "\nwas " << shot << " a hit? (y/n): ";
        std::string wasHitCIN;
        std::cin >> wasHitCIN;

        std::cout << "a1";
        if (wasHitCIN == "y" || wasHitCIN == "n")  {
            wasHit = ((wasHitCIN == "y") ? true : false);
            validAnswer = true;
        }
        std::cout << "a2";

    }
    std::cout << "a3 " << square1 << " ";
    Board.EnemeyBoard[square1].ship_hit = wasHit;
    std::cout << "a4";
    validAnswer = false;
    if (wasHit)
    {
        while (validAnswer == false)
        {
            std::cout << "\ndid shooting at " << shot << " kill a ship? (y/n): ";
            std::string shipWasSunkCIN;
            std::cin >> shipWasSunkCIN;

            if (shipWasSunkCIN == "y")  {
                validAnswer = false;
                while (validAnswer == false)
                {
                    std::cout << "\nwhat ship was sunk? (5-carrier/4-battleship/3-cruiser/3-submarine/2-destroyer): the ";
                    std::string shipSunkCIN;
                    std::cin >> shipSunkCIN;
                    
                    int directions[4] = {1, -1, 10, -10};
                    if (shipSunkCIN == "carrier")  {
                        std::cout << "Carrier\n";
                        Board.carrierAlive = false;
                        validAnswer = true;
                        
                        for (int dir : directions)
                        {
                            if (Board.EnemeyBoard[square1+dir].ship_hit == true && Board.EnemeyBoard[square1+dir].ship_sunk != true) //finds which direction the ship is pointing
                            {
                                for (int i = 0; i < 5; i++)
                                {
                                    Board.EnemeyBoard[square1+dir*i].ship_sunk = true;
                                }
                                break;
                            }
                        }
                    }            
                    if (shipSunkCIN == "battleship")  {
                        Board.battleshipAlive = false;
                        validAnswer = true;
                        
                        for (int dir : directions)
                        {
                            if (Board.EnemeyBoard[square1+dir].ship_hit == true && Board.EnemeyBoard[square1+dir].ship_sunk != true) //finds which direction the ship is pointing
                            {
                                for (int i = 0; i < 4; i++)
                                {
                                    Board.EnemeyBoard[square1+dir*i].ship_sunk = true;
                                }
                                break;
                            }
                        }
                    }            
                    if (shipSunkCIN == "cruiser")  {
                        Board.cruiserAlive = false;
                        validAnswer = true;
                        
                        for (int dir : directions)
                        {
                            if (Board.EnemeyBoard[square1+dir].ship_hit == true && Board.EnemeyBoard[square1+dir].ship_sunk != true) //finds which direction the ship is pointing
                            {
                                for (int i = 0; i < 3; i++)
                                {
                                    Board.EnemeyBoard[square1+dir*i].ship_sunk = true;
                                }
                                break;
                            }
                        }
                    }            
                    if (shipSunkCIN == "submarine")  {
                        Board.submarineAlive = false;
                        validAnswer = true;
                        
                        for (int dir : directions)
                        {
                            if (Board.EnemeyBoard[square1+dir].ship_hit == true && Board.EnemeyBoard[square1+dir].ship_sunk != true) //finds which direction the ship is pointing
                            {
                                for (int i = 0; i < 3; i++)
                                {
                                    Board.EnemeyBoard[square1+dir*i].ship_sunk = true;
                                }
                                break;
                            }
                        }
                    }            
                    if (shipSunkCIN == "destroyer")  {
                        Board.destroyerAlive = false;
                        validAnswer = true;
                        
                        for (int dir : directions)
                        {
                            if (Board.EnemeyBoard[square1+dir].ship_hit == true && Board.EnemeyBoard[square1+dir].ship_sunk != true) //finds which direction the ship is pointing
                            {
                                for (int i = 0; i < 2; i++)
                                {
                                    Board.EnemeyBoard[square1+dir*i].ship_sunk = true;
                                }
                                break;
                            }
                        }
                    }
        
                }
            }   
            validAnswer = true;
        }
    }   
}

void wasPlayerShotHit(board &Board, std::string shot)
{

}

void gameloop(board &Board)
{
    while (true)
    {
        PrintBoard(Board);

        letPlayerShoot(Board);
    }
}






