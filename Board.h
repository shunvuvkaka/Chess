#pragma once
#include "Tile.h"
#include <string>
#include <iostream>
#include <array>
#define WHITE_ROOK 'R'
#define WHITE_KNIGHT 'N'
#define WHITE_BISHOP 'B'
#define WHITE_QUEEN 'Q'
#define WHITE_PAWN 'P'
#define BLACK_ROOK 'r'
#define BLACK_KNIGHT 'n'
#define BLACK_BISHOP 'b'
#define BLACK_QUEEN 'q'
#define BLACK_PAWN 'p'
#define SIZE_OF_BOARD 64

class Board
{
public:
	Board();
	~Board();
	std::array<Tile, 2> GetMessageFromBoard(std::string msg);
	std::string SendMsgToBoard();
	std::string GetBoardString();
	std::array<Tile, SIZE_OF_BOARD> GetBoard();
	Tile operator[] (const int index);

protected:
	std::array<Tile,SIZE_OF_BOARD> _board;
};

extern Board gameboard;
