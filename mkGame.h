//
// Created by jbrogniez on 10/9/2018.
//

#ifndef ASSIGNMENT1_MKGAME_H
#define ASSIGNMENT1_MKGAME_H


#include "board.h"
#include "player.h"
#include "global.h"


class MKGame {
private:
    Board b;
    Player human;
    Player computer;
    int boardSize;
    int checkWin;
    int xCor;
    int yCor;
    int boardState;


public:
    MKGame(int, int);
    void mainGameFunction();
};


#endif //ASSIGNMENT1_MKGAME_H
