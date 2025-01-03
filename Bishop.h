#pragma once
#include "Piece.h"


class Bishop : public Piece
{
public:
	
	virtual bool IsValidMove(Tile newTile) override;
};

