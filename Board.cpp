#include "Board.h"


Board::Board()
{
    std::string initChess = "rnbkqbnrpppppppp################################PPPPPPPPRNBKQBNR";
    int i = 0;
    std::string currName = " ";
    for (char ch : initChess)
    {
        currName[0] = i % 8 + 49;
        currName[1] = i / 8 + 97;
        gameboard._board[i].SetOccupyingPiece(ch);
        gameboard._board[i].SetName(currName);
    }
}

Board::~Board()
{
    for (int i = 0; i < SIZE_OF_BOARD; i++) 
    {
        //delete &this->_board[i];
    }
}

std::array<Tile, 2> Board::GetMessageFromBoard(std::string msg)
{
    std::array<Tile, 2> mesg;
    for (int i = 0; i < 64; i++)
    {
        if (gameboard._board[i].GetName() == msg.substr(0, 2))
        {
            mesg[0] = gameboard._board[i];
        }
    }
    for (int i = 0; i < 64; i++)
    {
        if (gameboard._board[i].GetName() == msg.substr(2, 2))
        {
            mesg[1] = gameboard._board[i];
        }
    }
    return mesg;
}

std::string Board::SendMsgToBoard()
{
    return "nigger";
}

std::array<Tile, 64> Board::GetBoard()
{
    return this->_board;
}

Tile Board::operator[](const int index)
{
    int count = 0;
   for (auto& curr : this->_board)
   {
       if (count == index)
       {
           return curr;
       }
       count++;
   }
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


Board gameboard;