#include "probabilityMask.h"


probabilityMask createDestroyerMask(board &Board)
{
    probabilityMask Mask;
    for (int row = 0; row < 10; row++)
    {
        for (int coulmn = 0; coulmn < 10; coulmn++)
        {
            //horizantal destroyer
            if (coulmn != 9 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[row*10+(coulmn+1)].hit == false))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[row*10+(coulmn+1)] += 1;
            }
            //vertical destroyer
            if (row != 9 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+1)*10+coulmn].hit == false))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[(row+1)*10+coulmn] += 1;
            }
        }
    }
    return Mask;
}

probabilityMask createCruiserMask(board &Board)
{
    probabilityMask Mask;
    for (int row = 0; row < 10; row++)
    {
        for (int coulmn = 0; coulmn < 10; coulmn++)
        {
            //horizantal destroyer
            if (coulmn < 8 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[row*10+(coulmn+1)].hit == false && (Board.EnemeyBoard[row*10+(coulmn+2)].hit == false)))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[row*10+(coulmn+1)] += 1;
                Mask.mask[row*10+(coulmn+2)] += 1;
            }
            //vertical destroyer
            if (row < 8 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+1)*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+2)*10+coulmn].hit == false))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[(row+1)*10+coulmn] += 1;
                Mask.mask[(row+2)*10+coulmn] += 1;
            }
        }
    }
    return Mask;
}

probabilityMask createSubmarineMask(board &Board)
{
    probabilityMask Mask;
    for (int row = 0; row < 10; row++)
    {
        for (int coulmn = 0; coulmn < 10; coulmn++)
        {
            //horizantal destroyer
            if (coulmn < 8 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[row*10+(coulmn+1)].hit == false && (Board.EnemeyBoard[row*10+(coulmn+2)].hit == false)))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[row*10+(coulmn+1)] += 1;
                Mask.mask[row*10+(coulmn+2)] += 1;
            }
            //vertical destroyer
            if (row < 8 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+1)*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+2)*10+coulmn].hit == false))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[(row+1)*10+coulmn] += 1;
                Mask.mask[(row+2)*10+coulmn] += 1;
            }
        }
    }
    return Mask;
}

probabilityMask createBattleshipMask(board &Board)
{
    probabilityMask Mask;
    for (int row = 0; row < 10; row++)
    {
        for (int coulmn = 0; coulmn < 10; coulmn++)
        {
            //horizantal destroyer
            if (coulmn < 7 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[row*10+(coulmn+1)].hit == false 
                && (Board.EnemeyBoard[row*10+(coulmn+2)].hit == false)) && (Board.EnemeyBoard[row*10+(coulmn+3)].hit == false))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[row*10+(coulmn+1)] += 1;
                Mask.mask[row*10+(coulmn+2)] += 1;
                Mask.mask[row*10+(coulmn+3)] += 1;
            }
            //vertical destroyer
            if (row < 7 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+1)*10+coulmn].hit == false) 
                && (Board.EnemeyBoard[(row+2)*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+3)*10+coulmn].hit == false))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[(row+1)*10+coulmn] += 1;
                Mask.mask[(row+2)*10+coulmn] += 1;
                Mask.mask[(row+3)*10+coulmn] += 1;
            }
        }
    }
    return Mask;
}

probabilityMask createCarrierMask(board &Board)
{
    probabilityMask Mask;
    for (int row = 0; row < 10; row++)
    {
        for (int coulmn = 0; coulmn < 10; coulmn++)
        {
            //horizantal destroyer
            if (coulmn < 6 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[row*10+(coulmn+1)].hit == false && (Board.EnemeyBoard[row*10+(coulmn+2)].hit == false)) 
                && (Board.EnemeyBoard[row*10+(coulmn+3)].hit == false) && (Board.EnemeyBoard[row*10+(coulmn+4)].hit == false))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[row*10+(coulmn+1)] += 1;
                Mask.mask[row*10+(coulmn+2)] += 1;
                Mask.mask[row*10+(coulmn+3)] += 1;
                Mask.mask[row*10+(coulmn+4)] += 1;
            }
            //vertical destroyer
            if (row < 6 && (Board.EnemeyBoard[row*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+1)*10+coulmn].hit == false) && (Board.EnemeyBoard[(row+2)*10+coulmn].hit == false)
                && (Board.EnemeyBoard[(row+3)*10+coulmn].hit == false)  && (Board.EnemeyBoard[(row+4)*10+coulmn].hit == false))
            {
                Mask.mask[row*10+coulmn] += 1;
                Mask.mask[(row+1)*10+coulmn] += 1;
                Mask.mask[(row+2)*10+coulmn] += 1;
                Mask.mask[(row+3)*10+coulmn] += 1;
                Mask.mask[(row+4)*10+coulmn] += 1;
            }
        }
    }
    return Mask;
}


probabilityMask createWholeMask(board &Board)
{
    probabilityMask destroyerMask;
    probabilityMask cruiserMask;
    probabilityMask submarineMask;
    probabilityMask battleshipMask;
    probabilityMask carrierMask;

    //if the ship in question aint alive the code doesn't fill out it's mask. The masks are init-ed with 0s which means without filling out the masks it does nothing
    if (Board.destroyerAlive) {destroyerMask  = createDestroyerMask(Board);}
    if (Board.cruiserAlive) {cruiserMask  = createCruiserMask(Board);}
    if (Board.submarineAlive) {submarineMask  = createSubmarineMask(Board);}
    if (Board.battleshipAlive) {battleshipMask = createBattleshipMask(Board);}
    if (Board.carrierAlive) {carrierMask    = createCarrierMask(Board);}

    probabilityMask wholeMask;

    std::pair<int, int> highestValueFound  = {0,0};

    for (int i = 0; i < 100; i++)
    {
        int prob = destroyerMask.mask[i]+cruiserMask.mask[i]+submarineMask.mask[i]+battleshipMask.mask[i]+carrierMask.mask[i];
        wholeMask.mask[i] = prob;

        if (highestValueFound.first < prob)
        {
            highestValueFound.first = prob;
            highestValueFound.second = i;
        }
    }

    wholeMask.highestValue = highestValueFound;

    return wholeMask;
}