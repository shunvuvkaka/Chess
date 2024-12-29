#include "King.h"
#include "Board.h"


bool King::IsValidMove(Tile newTile)
{
	if (this->IsNotEating(newTile))
	{
		return false;
	}
	bool res = false;
	Tile temp = this->_pos;
	if (this->_pos.GetName() == newTile.GetName())
	{
		return false;
	}
	if (this->IsCloseCol(newTile) && this->IsCloseRow(newTile))
	{
		res = true;
		this->setPos(newTile);
	}
	if (this->IsCheck())
	{
		this->_pos = temp;
		res = false;
	}
	this->setPos(newTile);
	return res;
}

bool King::IsCheck()
{
	std::string myString = gameboard.GetBoardString();//RKBQKBKRPPPPPPPP######################pppppppprkbqkbkr
	char curr = ' ';
	bool res = false;
	for (int i = 0; i < 64; i++)
	{
		switch (myString[i])
		{
		case 'R':
			res = !(this->_isWhite) && (this->IsSameRow(gameboard[i]) || this->IsSameCol(gameboard[i]));
		case 'N':
			res = !(this->_isWhite) && (this->KnightMovement(gameboard[i]));
		case 'B':
			res = !(this->_isWhite) && (this->IsDiagonal(gameboard[i]));
		case 'Q':
			res = !(this->_isWhite) && (this->IsSameRow(gameboard[i]) || this->IsSameCol(gameboard[i]) || this->IsDiagonal(gameboard[i]));
		case 'P':
			res = !(this->_isWhite) && (this->PawnEatMovement(gameboard[i], true));
		case 'p':
			res = this->_isWhite && this->PawnEatMovement(gameboard[i], true);
		case 'q':
			res = (this->_isWhite) && (this->IsSameRow(gameboard[i]) || this->IsSameCol(gameboard[i]) || this->IsDiagonal(gameboard[i]));
		case 'b':
			res = (this->_isWhite) && (this->IsDiagonal(gameboard[i]));
		case 'n':
			res = (this->_isWhite) && (this->KnightMovement(gameboard[i]));
		case 'r':
			res = (this->_isWhite) && (this->IsSameRow(gameboard[i]) || this->IsSameCol(gameboard[i]));
		default:
		}
		if (res)
		{
			return true;
		}
	}
	return false;
}

bool King::IsCloseCol(Tile newTile)
{
	return (this->_pos.GetName()[0] - 1 == newTile.GetName()[0]) || (this->_pos.GetName()[0] == newTile.GetName()[0]) || (this->_pos.GetName()[0] + 1 == newTile.GetName()[0]);
}

bool King::IsCloseRow(Tile newTile)
{
	return (this->_pos.GetName()[1] - 1 == newTile.GetName()[1]) || (this->_pos.GetName()[1] == newTile.GetName()[1]) || (this->_pos.GetName()[1] + 1 == newTile.GetName()[1]);
}
