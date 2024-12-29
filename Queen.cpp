#include "Queen.h"

bool Queen::IsValidMove(Tile newTile)
{
    return this->IsDiagonal(newTile) || this->IsSameRow(newTile) || this->IsSameCol(newTile);
}