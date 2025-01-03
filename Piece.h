#pragma once
#include "Tile.h"
#include <iostream>
#include <array>
#include <iostream>
#include <string>
#include <cctype>
//#include "King.h"
//#include "Queen.h"
//#include "Rook.h"
//#include "Bishop.h"


class Piece
{
public:
	Piece(Tile pos,bool isWhite, char type);
	~Piece();
	bool GetIsWhite();
	std::string GetPos();
	char GetType();
	void setPos(Tile newTile);
	virtual bool IsValidMove(Tile newTile);
	bool IsSameRow(Tile newTile);
	bool IsSameCol(Tile newTile);
	bool IsDiagonal(Tile newTile);
	bool IsNotEating(Tile newTile);
	bool KnightMovement(Tile newTile);
	bool PawnEatMovement(Tile newTile, bool def = false);


protected:
	bool _isWhite;
	Tile _pos;
	char _type;
};

