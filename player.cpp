//
// Created by jbrogniez on 6/9/2018.
//

#include "global.h"
#include "player.h"
#include <stdlib.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;


Player::Player(char playerSymbol)
{
    playerSymbol_ = playerSymbol;
}


bool Player::checkValidCoordinates(int xCor, int yCor, int M, int positionState )
{
    if ( xCor < M && yCor < M && positionState == 0 )
    {
        return true;
    }

    else
    {
        if ( playerSymbol_ == 'X')
            cout << "Invalid move." << endl;
        return false;
    }
}


void Player::inputCoordinates(int M)
{
    if ( playerSymbol_ == 'X')
    {
        cout << "Input column number: ";
        cin >> xCor_;
        xCor_ -= 1;

        cout << "Input row number: ";
        cin >> yCor_;
        yCor_ -= 1;
    }

    else if ( playerSymbol_ == 'O' )
    {
        srand(time(nullptr));
        xCor_ = rand() % M;
        yCor_ = rand() % M;
    }
}


int Player::getXCor()
{
    return xCor_;
}

int Player::getYCor()
{
    return yCor_;
}

Player::Player() = default;