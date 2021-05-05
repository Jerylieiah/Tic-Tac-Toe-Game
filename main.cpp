/********* Declaration*******
I hereby certify that no part of this assignment has been copied from
any other student’s work or from any other source. No part of the code
has been written/produced for me by another person or copied from any
other source.
I hold a copy of this assignment that I can produce if the original is
lost or damaged.
**************************/

#include <iostream>
#include <iomanip>
#include <string>

#include "global.h"
#include "mkGame.h"
#include "board.h"
#include "player.h"

using std::cin;
using std::cout;
using std::endl;



int main() {
    int boardSize, winLength;

    cout << "Input M, the size of the game board: ";
    cin >> boardSize;

    cout << "Input K, the length of stones in a row needed to win: ";
    cin >> winLength;


    MKGame game(boardSize, winLength);
    game.mainGameFunction();

    return 0;
}