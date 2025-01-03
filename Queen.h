#pragma once
#include "Tile.h"
#include <iostream>
#include <array>
#include <iostream>
#include <string>
#include <cctype>
#include "Piece.h"


class Queen : public Piece
{
public:
	virtual bool IsValidMove(Tile newTile) override;

};

