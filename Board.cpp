//
// Created by Tobin Joseph on 2019-05-03.
//


#include <iostream>
#include "Board.h"

TicTacToeGame::Board::Board(int rows,int columns, int connectLength, char blankChar) :
        boardState(rows,std::vector<char>(columns,blankChar)),
        blankChar(blankChar), boardRows(rows) , boardColumns(columns),boardConnectLength(connectLength){

}

//int TicTacToeGame::Board::getSize() const {
    //return boardState.size();
//}

void TicTacToeGame::Board::display() const {

    //print column headers
    std::cout << "  ";
    for (int j = 0; j < getBoardColumns(); j++) {
        std::cout << j << ' ';
    }
    std::cout << std::endl;

    int rowIndex = 0;
    for (const auto& row : boardState) {
        std::cout << rowIndex << ' ';
        for(const auto& elem : row){
            std::cout << elem << ' ';
        }
        rowIndex++;
        std::cout << std::endl;
    }
}

int TicTacToeGame::Board::getBoardRows() const {
    return boardRows;
}
int TicTacToeGame::Board::getBoardColumns() const {
    return boardColumns;
}
int TicTacToeGame::Board::getBoardConnectLength() const {
    return boardConnectLength;
}

/*

bool TicTacToeGame::Board::inBounds( int col) const {
    return
           isBetween(col, 0, getBoardColumns() - 1);
}

bool TicTacToeGame::Board::isBetween(int val, int lower, int upper) {
    return val >= lower && val <= upper;
}

bool TicTacToeGame::Board::isBlankSpace(int row, int col) const {
    return boardState.at(row).at(col) == blankChar;
}

void TicTacToeGame::Board::set(int row, int col, char val) {
    boardState.at(row).at(col) = val;
}
*/

/*
TicTacToeGame::Board::iterator TicTacToeGame::Board::begin() {
    return boardState.begin();
}

TicTacToeGame::Board::iterator TicTacToeGame::Board::end() {
    return boardState.end();
}

TicTacToeGame::Board::const_iterator TicTacToeGame::Board::cbegin() const {
    return boardState.cbegin();
}

TicTacToeGame::Board::const_iterator TicTacToeGame::Board::cend() const {
    return  boardState.cend();
}
*/
/*
const char TicTacToeGame::Board::getBlankChar() const {
    return blankChar;
}

const char& TicTacToeGame::Board::at(int row, int col) const {
    return boardState.at(row).at(col);
}

bool TicTacToeGame::Board::full() const {
    for (int row = 0; row < getBoardRows(); ++row) {
        for (int col = 0; col < getBoardColumns(); ++col) {
            if(!isBlankSpace(row, col)){
                return false;
            }
        }
    }
    return true;
}

int TicTacToeGame::Board::getAvailableRow(int col){
    int availableRow = -1;
    for (int i=0 ; i < getBoardRows() ; i++) {
        if (at(i, col) == '*'){
            availableRow = i;
            break;
        }
    }
    return availableRow;
}
*/