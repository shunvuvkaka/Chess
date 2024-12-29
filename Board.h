#pragma once
#include "Tile.h"
#include <string>
#include <iostream>
#include <array>
#define SIZE_OF_BOARD 64

class Board
{
public:
	std::array<Tile, 2> GetMessageFromBoard(std::string msg);
	std::string SendMsgToBoard();
	std::string GetBoardString();
	std::array<Tile, SIZE_OF_BOARD> GetBoard();
	Tile operator[] (const int index);

protected:
	std::array<Tile,SIZE_OF_BOARD> _board;
};

extern Board gameboard;
