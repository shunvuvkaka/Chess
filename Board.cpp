#include "Board.h"
#include "Tile.h"
#include <string>
#include <iostream>
#include <array>


Board gameboard;

std::array<Tile, 2> Board::GetMessageFromBoard(std::string msg)
{
    return std::array<Tile, 2>();
}

std::string Board::SendMsgToBoard()
{
    
}

std::array<Tile, 64> Board::GetBoard()
{
    return this->_board;
}

std::string Board::GetBoardString()
{
    std::string res = "";
    for (auto& curr : this->_board)
    {
        res += curr.GetOccupyingPiece();
    }
    return res;
}
