
#include <map>
#include <string>
#include <iostream>

#include "utilFunctions.h"



int DecodeSquarePointerString(std::string String, int Start)
{
    int Square; //it uses -1 so that if something breaks you know something went horribly wrong 

    std::map<char, int> RowLetterToInt;
    RowLetterToInt['a'] = 0; RowLetterToInt['b'] = 1; RowLetterToInt['c'] = 2; RowLetterToInt['d'] = 3; RowLetterToInt['e'] = 4; 
    RowLetterToInt['f'] = 5; RowLetterToInt['g'] = 6; RowLetterToInt['h'] = 7; RowLetterToInt['i'] = 8; RowLetterToInt['j'] = 9; 

    std::cout << "\n\n\ntest\n";
    Square = RowLetterToInt[String[Start]]*10;
    std::cout << Square << '\n';
    Square += String[Start+1]-48;
    std::cout << Square << '\n';

    return Square;
}



std::string encodeSquareIdx(int idx)
{
    std::string SquarePointer = "  ";

    std::map<int, char> IntToRowLetter;
    IntToRowLetter[0] = 'a'; IntToRowLetter[1] = 'b'; IntToRowLetter[2] = 'c'; IntToRowLetter[3] = 'd'; IntToRowLetter[4] = 'e';
    IntToRowLetter[5] = 'f'; IntToRowLetter[6] = 'g'; IntToRowLetter[7] = 'h'; IntToRowLetter[8] = 'i'; IntToRowLetter[9] = 'j';

    SquarePointer[0] = (IntToRowLetter[idx/10]);
    SquarePointer[1] = ((idx%10)+48);

    return SquarePointer;
}

int unsunkShipLocOnBoard(board &Board) //returns the location of the first unsunk ship it finds will return -1 if no ship is found
{
    int unsunkShipLoc = -1;
    for (int i = 0; i < 100; i++)
    {
        if (Board.EnemeyBoard[i].ship_hit == true && Board.EnemeyBoard[i].ship_sunk != true)
        {
            unsunkShipLoc = i;
            break;
        }
    }

    return unsunkShipLoc;
}