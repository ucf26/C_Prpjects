#ifndef _FUNS_H
#define _FUNS_H

/* Section : Includes */

#include <stdio.h>
#include <stdlib.h>


/* Section : Data Type Declarations */

typedef enum{
    N_FINISHED = 0,
    FINISHED,
    TERMINATE
}game_status;


/* Section : Macro Declarations */

#define MAX_CELLS 9
#define MIN_CELLS 0
#define PLAYER_ONE_SIGN ('X')
#define PLAYER_TWO_SIGN ('O')


/* Section : Macro Functions Declarations */

#define IS_EVEN(x) (!(x & 1))


/* Section : Functions Declarations */

void initializeBoard();
void showBoard();
game_status updateBoard(int cell, char playersign);
game_status checkWinner(char sg);
void playTicTacToe();

#endif