#ifndef _PROBABILITYMASK_
#define _PROBABILITYMASK_

#include "board.h"

#include <utility>

struct probabilityMask
{
    int mask[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
    std::pair<int, int> highestValue;
};

probabilityMask createDestroyerMask(board &Board);
probabilityMask createCruiserMask(board &Board);
probabilityMask createSubmarineMask(board &Board);
probabilityMask createBattleshipMask(board &Board);
probabilityMask createCarrierMask(board &Board);

probabilityMask createWholeMask(board &Board);


#endif