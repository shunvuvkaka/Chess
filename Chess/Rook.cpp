#include "Rook.h"

bool Rook::IsValidMove(Tile newTile)
{
	bool res = false;
	if (this->IsSameCol(newTile) || this->IsSameRow(newTile))
	{
		this->setPos(newTile);
	}
    return res;
}