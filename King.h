#pragma once
#include <iostream>
#include <array>
#include <string>
#include "Piece.h"
#include "Board.h"
#include <cctype>


class King : public Piece
{
public:
    virtual bool IsValidMove(Tile newTile) override;
    bool IsCheck();
    bool IsCloseCol(Tile newTile);
    bool IsCloseRow(Tile newTile);

protected:
    bool _hasMoved;
    bool _isCheck;
};