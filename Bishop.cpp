#include "Bishop.h"

bool Bishop::IsValidMove(Tile newTile)
{
	if (this->IsNotEating(newTile))
	{
		return false;
	}
	this->setPos(newTile);
	return this->IsDiagonal(newTile);
}
