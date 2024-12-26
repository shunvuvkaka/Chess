#include "Piece.h"


Piece::Piece(Tile pos, bool isWhite, char type)
{
	this->_pos = pos;
	this->_isWhite = isWhite;
	this->_type = type;
}


Piece::~Piece()
{
}

bool Piece::GetIsWhite() 
{
	return this->_isWhite;
}

std::string Piece::GetPos() 
{
	return this->_pos.GetName();
}

char Piece::GetType() 
{
	return this->_type;
}

void Piece::setPos(Tile newTile)
{
	this->_pos.SetOccupyingPiece('#');
	this->_pos = newTile;
}

bool Piece::IsValidMove(Tile newTile)
{
	return false;
}

bool Piece::IsSameRow(Tile newTile) 
{
	bool res = false;
	if (this->_pos.GetName() == newTile.GetName())
	{
		return false;
	}
	if (this->_pos.GetName()[0] == newTile.GetName()[0])
	{
		res = true;
	}
	return res;
}

bool Piece::IsSameCol(Tile newTile)
{
	bool res = false;
	if (this->_pos.GetName() == newTile.GetName())
	{
		return false;
	}
	if (this->_pos.GetName()[1] == newTile.GetName()[1])
	{
		res = true;
	}
	return res;
}
