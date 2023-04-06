//
// Created by Tobin Joseph on 2019-05-03.
//

#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H
#include <vector>
#include <string>
namespace TicTacToeGame {
    class Board {
    public:
    /*
        using iterator = std::vector<std::string>::iterator;
        using const_iterator = std::vector<std::string>::const_iterator;
    */

        explicit Board(int rows,int columns, int connectLength ,  char blankChar);
        //int getSize() const;
        int getBoardRows() const;
        int getBoardColumns() const;
        int getBoardConnectLength() const;
        void display() const;
        /*
        bool inBounds( int col) const;
        bool isBlankSpace(int row, int col) const;
        void set(int row, int col, char val);

        iterator begin();
        iterator end();
        const_iterator cbegin() const;
        const_iterator cend() const;
        int getAvailableRow(int col);
        const char& at(int row, int col) const;

        const char getBlankChar() const;
        bool full() const;

    private:
        static bool isBetween(int val, int lower, int upper);
*/
    private:
        std::vector<std::vector<char> > boardState;
        const char blankChar;

        int boardRows;
        int boardColumns;
        int boardConnectLength;
    };
}


#endif //TICTACTOE_BOARD_H
