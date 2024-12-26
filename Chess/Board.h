#pragma once
#include "Tile.h"
#include <string>
#include <iostream>
#include <array>


class Board
{
public:
	std::array<Tile, 2> GetMessageFromBoard(std::string msg);//e4d5
	std::string SendMsgToBoard();
	std::string GetBoardString();
	std::array<Tile, 64> GetBoard();

protected:
	std::array<Tile,64> _board;
};

extern Board gameboard;
