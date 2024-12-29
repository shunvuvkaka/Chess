#include "Piece.h"
#include "Board.h"
#include "Tile.h"
#include <string>
#include <iostream>
#include <array>

Tile::Tile()
{
}


Tile::Tile(std::string name, char ocuppyingPiece)
{
	this->_name = name;
	this->_OccupyingPiece = ocuppyingPiece;
}

Tile::~Tile()
{
}

Tile Tile::operator=(const Tile& other)
{
	this->_name = other._name;
	this->_OccupyingPiece = other._OccupyingPiece;
	return *this;
}

char Tile::GetOccupyingPiece()
{
	return this->_OccupyingPiece;
}

std::string Tile::GetName()
{
	return this->_name;
}

void Tile::SetOccupyingPiece(char newPiece)
{
	this->_OccupyingPiece = newPiece;
}
