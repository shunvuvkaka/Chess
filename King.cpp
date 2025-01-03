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
    for (int i = 0; i < SIZE_OF_BOARD; i++)
    {
        switch (myString[i])
        {
        case WHITE_ROOK:
            res = !(this->_isWhite) && (this->IsSameRow(gameboard[i]) || this->IsSameCol(gameboard[i]));
            break;
        case WHITE_KNIGHT:
            res = !(this->_isWhite) && (this->KnightMovement(gameboard[i]));
            break;
        case WHITE_BISHOP:
            res = !(this->_isWhite) && (this->IsDiagonal(gameboard[i]));
            break;
        case WHITE_QUEEN:
            res = !(this->_isWhite) && (this->IsSameRow(gameboard[i]) || this->IsSameCol(gameboard[i]) || this->IsDiagonal(gameboard[i]));
            break;//e4
        case WHITE_PAWN:
            res = !(this->_isWhite) && (this->PawnEatMovement(gameboard[i], true));
            break;
        case BLACK_PAWN:
            res = this->_isWhite && this->PawnEatMovement(gameboard[i], true);
            break;
        case BLACK_QUEEN:
            res = (this->_isWhite) && (this->IsSameRow(gameboard[i]) || this->IsSameCol(gameboard[i]) || this->IsDiagonal(gameboard[i]));
            break;
        case BLACK_BISHOP:
            res = (this->_isWhite) && (this->IsDiagonal(gameboard[i]));
            break;
        case BLACK_KNIGHT:
            res = (this->_isWhite) && (this->KnightMovement(gameboard[i]));
            break;
        case BLACK_ROOK:
            res = (this->_isWhite) && (this->IsSameRow(gameboard[i]) || this->IsSameCol(gameboard[i]));
            break;
        default:
            break;
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
