#include "print.h"
#include "board.h"

#include <iostream>
#include <fcntl.h>
#include <io.h>

//hell hole of a function don't touch
void PrintBoard(board &Board)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    char letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
 
    //prints enemy board
    std::wcout << "\n\n            enemey board             \n";
    std::wcout << "    0   1   2   3   4   5   6   7   8   9\n";
    std::wcout << "  +---+---+---+---+---+---+---+---+---+---+\n";

    for (int row = 0; row < 10; row++)
    {
        //prints enemy row
        std::wcout << letters[row] << " ";
        for (int coulmn = 0; coulmn < 10; coulmn++)
        {
            if (Board.EnemeyBoard[row*10+coulmn].hit)
            {
                std::wcout << "| " <<  ((Board.EnemeyBoard[row*10+coulmn].ship_hit) ? ((Board.EnemeyBoard[row*10+coulmn].ship_sunk == false) ? L"▮" : L"▯") : L"○") << " ";                
            }
            else
            {
                std::wcout << "| " << ' ' << " ";
            }
        }
        std::wcout << "|\n";
        std::wcout << "  +---+---+---+---+---+---+---+---+---+---+\n";
    }
    _setmode(_fileno(stdout), _O_TEXT);
}









