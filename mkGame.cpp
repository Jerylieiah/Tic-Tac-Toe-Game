//
// Created by jbrogniez on 10/9/2018.
//

#include "global.h"
#include "mkGame.h"
#include "board.h"
#include "player.h"

using std::cin;
using std::cout;
using std::endl;


MKGame::MKGame(int M, int K) : b(M, K), human(HUMAN_SYMBOL), computer(COMPUTER_SYMBOL)
{
    checkWin = 0;
    boardSize = M;

    b.displayBoard( b.getBoard(M_CONSTANT) );
}


void MKGame::mainGameFunction()
{
    while ( !b.checkFullBoard() && checkWin == 0 )
    {
        cout << "PLAYER'S TURN" << endl;
        cout << endl;
        do
        {
            human.inputCoordinates(boardSize);

            xCor = human.getXCor();
            yCor = human.getYCor();
            boardState = b.getBoardState( xCor, yCor );
        } while ( !human.checkValidCoordinates( xCor, yCor, boardSize, boardState ));

        b.updateGameState( xCor, yCor, HUMAN_SYMBOL );

        b.displayBoard(boardSize);
        checkWin = b.checkWinCondition( xCor, yCor, HUMAN_SYMBOL );



        if ( !b.checkFullBoard() && checkWin == 0 )
        {
            do
            {
                computer.inputCoordinates(boardSize);

                xCor = computer.getXCor();
                yCor = computer.getYCor();
                boardState = b.getBoardState( xCor, yCor );
            } while ( !computer.checkValidCoordinates( xCor, yCor, boardSize, boardState ));

            cout << "COMPUTER'S TURN" << endl;
            cout << endl;
            b.updateGameState( xCor, yCor, COMPUTER_SYMBOL );

            b.displayBoard(boardSize);
            checkWin = b.checkWinCondition( xCor, yCor, COMPUTER_SYMBOL );
        }
    }

    if ( b.checkFullBoard() )
        cout << "Game board full. Draw." << endl;
    else if ( checkWin == 1 )
        cout << "You win!!!!" << endl;
    else if ( checkWin == 2 )
        cout << "Random player wins...." << endl;
}