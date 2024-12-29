#include "Queen.h"

bool Queen::IsValidMove(Tile newTile)
{
    bool res = this->IsDiagonal(newTile) || this->IsSameRow(newTile) || this->IsSameCol(newTile);
    if (res)
    {
        this->setPos(newTile);
    }
    return res;
}