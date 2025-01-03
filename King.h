#pragma once
#include "Tile.h"
#include <iostream>
#include <array>
#include <iostream>
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