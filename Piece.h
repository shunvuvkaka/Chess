#pragma once
#include "Tile.h"
#include <iostream>
#include <array>
#include <iostream>
#include <string>
#include <cctype>


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

protected:
	bool _isWhite;
	Tile _pos;
	char _type;
};

