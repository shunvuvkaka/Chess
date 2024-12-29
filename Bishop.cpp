#include "Bishop.h"

bool Bishop::IsValidMove(Tile newTile)
{
	if (this->IsNotEating(newTile))
	{
		return false;
	}
	return this->IsDiagonal(newTile);
}
