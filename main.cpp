#include "TicTacToe.h"
#include <iostream>


int main(int argc, char** argv) {

    //cout << "argc = " << argc << endl;
    //for (int i = 0; i < argc; i++) {
    //cout << "argv[" << i << "] = " << argv[i] << endl;
    //}

    int rows,columns,connectLength;

    if (argc >= 2) {
        rows = std::stoi(argv[1]);
    }
    if (argc >= 3) {
        columns = std::stoi(argv[2]);
    }
    if (argc >= 4) {
        connectLength = std::stoi(argv[3]);
    }

    //cout<<"rows = "<< rows<<endl;
    //cout<<"columns = "<< columns<<endl;
    //cout<<"winLength = "<< connectLength<<endl;

    TicTacToeGame::TicTacToe game(rows, columns, connectLength);
    game.play();
    return 0;
}

