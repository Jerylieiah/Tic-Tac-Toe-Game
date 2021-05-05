//
// Created by jbrogniez on 6/9/2018.
//

#ifndef ASSIGNMENT1_PLAYER_H
#define ASSIGNMENT1_PLAYER_H


#include <iostream>
#include <iomanip>
#include <string>



class Player {
private:
    char playerSymbol_;
    int xCor_;
    int yCor_;

public:
    Player();
    explicit Player(char);

    void inputCoordinates(int);
    int getXCor();
    int getYCor();
    bool checkValidCoordinates(int, int, int, int);
};


#endif //ASSIGNMENT1_PLAYER_H
