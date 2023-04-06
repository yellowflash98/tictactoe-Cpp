//
// Created by Tobin Joseph on 2019-05-03.
//

#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H
#include <string>
namespace TicTacToeGame{
    class Player {
    public:
        Player();
        const std::string& getName() const;
        char getPiece() const;
    private:
        std::string name;
        char piece;
    };
}

#endif //TICTACTOE_PLAYER_H
