#include "King.h"
#include "Board.h"


bool King::IsValidMove(Tile newTile)
{
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
	return res;
}

bool King::IsCheck()
{
	std::string myString = gameboard.getBoard();
	for (int i = 0; i < 64; i++)
	{
		if ((this->_isWhite == true && islower(myString[i])))
		{
			if (gameboard.GetBoard()[i])
			{

			}
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
