//
// Created by Tobin Joseph on 2019-05-03.
//

#include "Player.h"
#include <iostream>
#include <string>


TicTacToeGame::Player::Player() {
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your piece: ";
    std::cin >> piece;
    std::string extra;
    std::getline(std::cin, extra);
}

const std::string& TicTacToeGame::Player::getName() const {
    return name;
}

char TicTacToeGame::Player::getPiece() const {
    return piece;
}
