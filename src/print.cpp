#include "print.h"
#include "board.h"

#include <iostream>
#include <fcntl.h>
#include <io.h>

//hell hole of a function don't touch
void PrintBoard(board Board)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    char letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
 
    //prints enemy board
    std::wcout << "\n\n                enemy board              \n";
    std::wcout << "    1   2   3   4   5   6   7   8   9  10\n";
    std::wcout << "  +---+---+---+---+---+---+---+---+---+---+\n";

    for (int row = 0; row < 10; row++)
    {
        std::wcout << letters[row] << " ";
        for (int coulmn = 0; coulmn < 10; coulmn++)
        {
            if (Board.EnemeyBoard[row][coulmn].hit)
            {
                std::wcout << "| " <<  ((Board.EnemeyBoard[row][coulmn].ship_hit) ? L"▮" : L"○") << " ";                
            }
            else
            {
                std::wcout << "| " << ' ' << " ";
            }
        }
        std::wcout << "|\n";
        std::wcout << "  +---+---+---+---+---+---+---+---+---+---+\n";
    }

    //prints player board
    std::wcout << "\n\n               player board              \n";
    std::wcout << "    1   2   3   4   5   6   7   8   9  10\n";
    std::wcout << "  +---+---+---+---+---+---+---+---+---+---+\n";

    for (int row = 0; row < 10; row++)
    {
        std::wcout << letters[row] << " ";
        for (int coulmn = 0; coulmn < 10; coulmn++)
        {
            if (Board.PlayerBoard[row][coulmn].contains_ship)
            {
                std::wcout << "| " <<  ((Board.PlayerBoard[row][coulmn].hit) ? L"▯" : L"▮") << " ";                
            }
            else
            {
                std::wcout << "| " << ((Board.PlayerBoard[row][coulmn].hit) ? L"○" : L" ") << " ";
            }
        }
        std::wcout << "|\n";
        std::wcout << "  +---+---+---+---+---+---+---+---+---+---+\n";
    }
    _setmode(_fileno(stdout), _O_TEXT);
}









