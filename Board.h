#pragma once
#include "Tile.h"
#include <string>
#include <iostream>
#include <array>
#define SIZE_OF_BOARD 64

class Board
{
public:
	std::array<Tile, 2> GetMessageFromBoard(std::string msg);//e4d5
	std::string SendMsgToBoard();
	std::string GetBoardString();
	std::array<Tile, SIZE_OF_BOARD> GetBoard();

protected:
	std::array<Tile,SIZE_OF_BOARD> _board;
};

extern Board gameboard;
