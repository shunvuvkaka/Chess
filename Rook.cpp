#include "Rook.h"

Rook::Rook(Tile pos, bool isWhite, bool hasMoved)
	: Piece(pos, isWhite, 'R')
{
	this->_hasMoved = hasMoved;
}

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