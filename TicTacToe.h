//
// Created by Tobin Joseph on 2019-05-03.
//

#ifndef TICTACTOE_TICTACTOEFUNCTIONS_H
#define TICTACTOE_TICTACTOEFUNCTIONS_H

#include <vector>
#include "Player.h"
#include "Board.h"
namespace TicTacToeGame {
    class Move; //forward declaration

    class TicTacToe {

    public:
        explicit TicTacToe(int boardRows,int boardColumns, int boardConnectLength );

        virtual ~TicTacToe() = default;
        void play();

    private:
/*
        void determineStartingPlayer();
        Move getValidMove() const;

        const Player& getCurrentPlayer() const;
        Player& getCurrentPlayer();

        bool isGameOver() const;
        bool gameWon() const;
        bool horzWin() const;
        bool vertWin() const;
        bool diagWin() const;
        bool leftDiagWin() const;
        bool rightDiagWin() const;
        bool tie() const;

        void changeTurn();

        void declareResults() const;
*/
    private:
        Board board;
        std::vector<Player> players;
        int playerTurn;
    };
}


#endif //TICTACTOE_TICTACTOEFUNCTIONS_H
