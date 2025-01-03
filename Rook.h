#pragma once
#include "Tile.h"
#include <iostream>
#include <array>
#include <iostream>
#include <string>
#include "Piece.h"


class Rook : public Piece
{
public:
	Rook(Tile pos, bool isWhite, bool hasMoved);
	bool IsValidMove(Tile newTile) override;//checks if move is valid
protected:
	bool _hasMoved;
};

