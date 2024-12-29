#pragma once
#include "Piece.h"
#include "Board.h"
#include "Tile.h"
#include <string>
#include <iostream>
#include <array>


class Tile
{
public:
	Tile();
	Tile(std::string name, char ocuppyingPiece);
	~Tile();
	Tile operator= (const Tile& other);
	char GetOccupyingPiece();
	std::string GetName();
	void SetOccupyingPiece(char newPiece);

protected:
	char _OccupyingPiece;
	std::string _name;

};

