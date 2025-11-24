#include <iostream>
#include <string>

#include "print.h"
#include "board.h"

int main()
{
    board Board;

    Board.PlayerBoard[5][3].contains_ship = true; 
    Board.PlayerBoard[5][4].contains_ship = true; 
    Board.PlayerBoard[5][2].contains_ship = true; 
    Board.PlayerBoard[5][5].contains_ship = true; 

    Board.PlayerBoard[5][5].hit = true; 

    Board.PlayerBoard[7][6].contains_ship = true; 
    Board.PlayerBoard[7][5].contains_ship = true; 
    Board.PlayerBoard[7][4].contains_ship = true; 

    Board.PlayerBoard[7][6].hit = true; 
    Board.PlayerBoard[7][5].hit = true; 
    Board.PlayerBoard[7][4].hit = true;

    Board.PlayerBoard[4][6].hit = true; 
    Board.PlayerBoard[9][9].hit = true; 

    
    Board.EnemeyBoard[4][5].hit = true; 
    Board.EnemeyBoard[4][5].ship_hit = true; 
    
    Board.EnemeyBoard[4][6].hit = true; 
    Board.EnemeyBoard[4][6].ship_hit = true; 

    Board.EnemeyBoard[7][8].hit = true; 

    PrintBoard(Board);

    system("pause");
}