#include "Knight.h"

bool Knight::IsValidMove(Tile newTile)
{
    return this->KnightMovement(newTile);
}
