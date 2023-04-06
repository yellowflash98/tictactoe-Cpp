//
// Created by Tobin Joseph on 2019-05-03.
//


#include <string>
#include "Move.h"
#include "Player.h"
#include "Board.h"

TicTacToeGame::Move::Move(const TicTacToeGame::Player& maker) : maker(maker), row(-99), col(-98), parsedSuccessfully(false) {

}

void TicTacToeGame::Move::parseInput(std::stringstream& input) {
    parsedSuccessfully = static_cast<bool>(input); //input must start out as being good

    input >>  col;
    //we must have read both row and col
    parsedSuccessfully = parsedSuccessfully && static_cast<bool>(input);
    std::string leftovers;
    input >> leftovers;
    //and we weren't able to read anything after the row and col
    parsedSuccessfully = parsedSuccessfully && !input;

}

bool TicTacToeGame::Move::isValid(const Board& board) const{

    return parsedSuccessfully && board.inBounds(col) && board.isBlankSpace(row,col);
}

void TicTacToeGame::Move::make(TicTacToeGame::Board& board) {
    board.set(row, col, maker.getPiece());
}




