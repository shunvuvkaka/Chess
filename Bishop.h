#pragma once
#include "Tile.h"
#include <iostream>
#include <array>
#include <iostream>
#include <string>
#include "Piece.h"


class Bishop : public Piece
{
public:
	
	bool IsValidMove(Tile newTile) override;
};
