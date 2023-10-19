
#include "funs.h"


int main() {
    printf("\n\n--------- Tic Tac Toe ----------\n\n");

    printf("\n* Instructions \n\n");
    printf("\tPlayer 1 sign = X\n");
    printf("\tPlayer 2 sign = O");
    printf("\n\tTo exit from game, Enter 2\n");

    printf("\n\n* Cell Numbers On The Board\n");
    initializeBoard();

    char start = ' ';
    printf("\n> Press Enter to start...");

    scanf("%c", &start);

    if (start)
    {
        int userChoice = 1;

        while (userChoice)
        {
            playTicTacToe();
            printf("\n* Menu\n");
            printf("\n ---> Press 1 to Restart");
            printf("\n ---> Press 0 for Exit");
            printf("\n\nChoice: ");
            scanf("%d", &userChoice);
            if (userChoice)
            {
                initializeBoard();
            }
            printf("\n");
        }
    }
    printf("\n :: Thanks for playing Tic Tac Toe game! :: \n");
    return 0;
}
