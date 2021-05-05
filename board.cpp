//
// Created by jbrogniez on 6/9/2018.
//

#include "global.h"
#include "board.h"

using std::cin;
using std::cout;
using std::endl;
using std::setw;


Board::Board(int m, int k)
{
    M = m;
    K = k;
    noOfMoves = -1;

    boardState = new int*[M];

    for ( int i = 0; i < M; i++ )
    {
        boardState[i] = new int[M];
        for ( int j = 0; j < M; j++ )
        {
            boardState[i][j] = 0;
        }
    }
}

Board::~Board()
{
    for ( int i = 0; i < M; i++ )
    {
        delete [] boardState[i];
    }
    delete [] boardState;
    boardState = nullptr;
}


int Board::getBoard(char value)
{
    const int error = 0;
    if (value == 'm')
        return M;


    else if (value == 'k')
        return K;


    else if ( value == 'n')
        return noOfMoves;


    else
        return error;
}


void Board::updateGameState( int xCor, int yCor, char playerSymbol )
{
    if ( playerSymbol == HUMAN_SYMBOL )
        boardState[xCor][yCor] = 1;
    else if ( playerSymbol == COMPUTER_SYMBOL )
        boardState[xCor][yCor] = -1;
}



int Board::getBoardState( int xCor, int yCor )
{
    int positionState = 0;
    if ( xCor <= M || yCor <= M )
        positionState = boardState[xCor][yCor];
    return positionState;
}



void Board::displayBoard( int m )
{
    char gameBoard[m][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (boardState[i][j] == 1)
            {
                gameBoard[i][j] = HUMAN_SYMBOL;
            }

            else if (boardState[i][j] == -1)
            {
                gameBoard[i][j] = COMPUTER_SYMBOL;
            }

            else if (boardState[i][j] == 0)
            {
                gameBoard[i][j] = ' ';
            }
        }
    }


    cout << "   1";
    for ( int i = 2; (i <= m && i <= 9); i++ )
        cout << "   " << i;

    if ( m >= 9 )
    {
        for ( int i = 10; i <= m; i++ )
            cout << "  " << i;
        cout << endl;
    }

    else
        cout << endl;


    int row, col;
    for (row = 1; row <= m; row++)
    {
        if (row >= 10 )
            cout << row << " ";
        else
            cout << row << "  ";

        for (col = 1; col <= m; col++)
        {
            cout << setw(1) << gameBoard[col-1][row-1];
            if (col != m)
                cout << "---";
        }
        cout << endl;

        if (row != m)
        {
            cout << "   |";
            for (int i = 2; i <= m; i++)
                cout << "   |";
            cout << endl;
        }
    }
    noOfMoves++;
    cout << "noOfMoves: "<< noOfMoves << endl;
    cout << endl;
}


bool Board::checkFullBoard()
{
    if ( noOfMoves == M * M )
        return true;

    else
        return false;
}


int Board::checkWinCondition(int xCor, int yCor, char playerSymbol)
{
    if ( checkHorizontalWin(xCor, yCor, playerSymbol) )
    {
        if ( playerSymbol == HUMAN_SYMBOL )
            return 1;
        else
            return 2;
    }

    else if ( checkVerticalWin(xCor, yCor, playerSymbol) )
    {
        if ( playerSymbol == HUMAN_SYMBOL )
            return 1;
        else
            return 2;
    }

    else if ( checkDiagonalWin(xCor, yCor, playerSymbol) )
    {
        if ( playerSymbol == HUMAN_SYMBOL )
            return 1;
        else
            return 2;
    }
    return 0;
}


bool Board::checkHorizontalWin(int xCor, int yCor, char playerSymbol)
{
    bool checkWin = false;
    int counter = 0;
    int i = xCor;
    int j = yCor;

    if ( playerSymbol == HUMAN_SYMBOL )
    {
        while ( boardState[i][j] == 1 && counter < K && i != 0 )
        {
            i--;
            counter++;
        }
        if ( i == 0 && boardState[i][j] == 1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( boardState[i][j] == 1 && counter < K && i != M - 1 )
        {
            i++;
            counter++;
        }
        if ( i == M - 1 && boardState[i][j] == 1 )
            counter++;

        if (counter == K)
            checkWin = true;
    }

    else if ( playerSymbol == COMPUTER_SYMBOL )
    {
        while ( ( boardState[i][j] == -1 && counter < K ) && i != 0 )
        {
            i--;
            counter++;
        }
        if ( i == 0 && boardState[i][j] == -1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == -1 && counter < K ) && i != M - 1 )
        {
            i++;
            counter++;
        }
        if ( i == M - 1 && boardState[i][j] == -1 )
            counter++;

        if (counter == K)
            checkWin = true;
    }
    return checkWin;
}


bool Board::checkVerticalWin(int xCor, int yCor, char playerSymbol)
{
    bool checkWin = false;
    int counter = 0;
    int i = xCor;
    int j = yCor;

    if ( playerSymbol == HUMAN_SYMBOL )
    {
        while ( ( boardState[i][j] == 1 && counter < K ) && j != 0 )
        {
            j--;
            counter++;
        }
        if ( j == 0 && boardState[i][j] == 1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == 1 && counter < K ) && j != M - 1 )
        {
            j++;
            counter++;
        }
        if ( j == M - 1 && boardState[i][j] == 1 )
            counter++;

        if (counter == K)
            checkWin = true;
    }

    else if ( playerSymbol == COMPUTER_SYMBOL )
    {
        while ( ( boardState[i][j] == -1 && counter < K ) && j != 0 )
        {
            j--;
            counter++;
        }
        if ( j == 0 && boardState[i][j] == -1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == -1 && counter < K ) && j != M - 1 )
        {
            j++;
            counter++;
        }
        if ( j == M - 1 && boardState[i][j] == -1 )
            counter++;

        if (counter == K)
            checkWin = true;
    }
    return checkWin;
}


bool Board::checkDiagonalWin(int xCor, int yCor, char playerSymbol)
{
    bool checkWin = false;
    int counter = 0;
    int i = xCor;
    int j = yCor;

    if ( playerSymbol == HUMAN_SYMBOL )
    {
        while ( ( boardState[i][j] == 1 && counter < K ) && ( i != 0 && j != 0 ) )
        {
            i--;
            j--;
            counter++;
        }
        if ( i == 0 && j == 0 && boardState[i][j] == 1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == 1 && counter < K ) && ( i != M - 1 && j != M - 1 ) )
        {
            i++;
            j++;
            counter++;
        }
        if ( i == M - 1 && j == M - 1 && boardState[i][j] == 1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == 1 && counter < K ) && ( i != M - 1 && j != 0 ) )
        {
            i++;
            j--;
            counter++;
        }
        if ( i == M - 1 && j == 0 && boardState[i][j] == 1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == 1 && counter < K ) && ( i != 0 && j != M - 1 ) )
        {
            i--;
            j++;
            counter++;
        }
        if ( i == 0 && j == M - 1 && boardState[i][j] == 1 )
            counter++;

        if (counter == K)
            checkWin = true;
    }


    else if ( playerSymbol == COMPUTER_SYMBOL )
    {
        while ( ( boardState[i][j] == -1 && counter < K ) && ( i != 0 && j != 0 ) )
        {
            i--;
            j--;
            counter++;
        }
        if ( i == 0 && j == 0 && boardState[i][j] == -1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == -1 && counter < K ) && ( i != M - 1 && j != M - 1 ) )
        {
            i++;
            j++;
            counter++;
        }
        if ( i == M - 1 && j == M - 1 && boardState[i][j] == -1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == -1 && counter < K ) && ( i != M - 1 && j != 0 ) )
        {
            i++;
            j--;
            counter++;
        }
        if ( i == M - 1 && j == 0 && boardState[i][j] == -1 )
            counter++;

        if (counter == K)
            checkWin = true;


        counter = 0;
        i = xCor;
        j = yCor;
        while ( ( boardState[i][j] == -1 && counter < K ) && ( i != 0 && j != M - 1 ) )
        {
            i--;
            j++;
            counter++;
        }
        if ( i == 0 && j == M - 1 && boardState[i][j] == -1 )
            counter++;

        if (counter == K)
            checkWin = true;
    }
    return checkWin;
}

Board::Board() = default;
