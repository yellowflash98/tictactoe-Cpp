//
// Created by Tobin Joseph on 2019-05-03.
//

#ifndef TICTACTOE_MOVE_H
#define TICTACTOE_MOVE_H
#include <sstream>

namespace TicTacToeGame {
    class Player;
    class Board;

    class Move {
    public:

        Move(const Player& maker);
        void parseInput(std::stringstream& input);
        bool isValid(const Board& board) const;
        void make(Board& board);
        //int getRow(Board& board,int col);

    private:
        const Player& maker;
        int row, col;
        bool parsedSuccessfully;
    };
}


#endif //TICTACTOE_MOVE_H
