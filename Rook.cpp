#include "Rook.h"

bool Rook::IsValidMove(Tile newTile)
{
	if (this->IsNotEating(newTile))
	{
		return false;
	}
	bool res = false;
	if (this->IsSameCol(newTile) || this->IsSameRow(newTile))
	{
		this->setPos(newTile);
	}
    return res;
}