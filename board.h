//
// Created by jbrogniez on 6/9/2018.
//

#ifndef ASSIGNMENT1_BOARD_H
#define ASSIGNMENT1_BOARD_H

#include <iostream>
#include <iomanip>
#include <string>



class Board {
private:
    int M;
    int K;
    int **boardState = nullptr;
    int noOfMoves;

public:
    Board();
    Board(int, int);
    ~Board();

    int getBoard(char);
    bool checkFullBoard();
    void updateGameState(int, int, char);
    void displayBoard(int);
    int getBoardState(int, int);
    int checkWinCondition(int, int, char);
    bool checkHorizontalWin(int, int, char);
    bool checkVerticalWin(int, int, char);
    bool checkDiagonalWin(int, int, char);
};


#endif //ASSIGNMENT1_BOARD_H
