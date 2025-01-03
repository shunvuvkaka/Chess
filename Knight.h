#pragma once
#include "Piece.h"
class Knight : public Piece
{
public:
	bool IsValidMove(Tile newTile) override;
};

