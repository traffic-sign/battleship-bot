#ifndef _UTILFUNCTIONS_
#define _UTILFUNCTIONS_

#include <string>

#include "square.h"
#include "board.h"
#include "ships.h"


int DecodeSquarePointerString(std::string String, int Start);

std::string encodeSquareIdx(int idx);

int unsunkShipLocOnBoard(board &Board);


#endif