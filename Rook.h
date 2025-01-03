#pragma once
#include "Piece.h"


class Rook : public Piece
{
public:
	Rook(Tile pos, bool isWhite, bool hasMoved);
	virtual bool IsValidMove(Tile newTile) override;//checks if move is valid
protected:
	bool _hasMoved;
};

