//
// Created by Yousef Mahmoud on 10/19/2023.
//

#include "funs.h"

static char board[3][3];



void initializeBoard()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            board[i][j]=' ';
        }
    }
    int cnt = 1;
    printf("\n\n\t  ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d", cnt);
            cnt++;
            if(j<2) printf(" | ");
        }
        if(i<2) printf("\n\t----------------\n\t  ");
    }
    printf("\n\n\n");
}

void showBoard()
{
    printf("\n\n\t  ");
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("%c", board[i][j]);
            if(j<2) printf(" | ");
        }
        if(i<2) printf("\n\t----------------\n\t  ");
    }
    printf("\n\n\n");
}

game_status updateBoard(int cell, char playersign)
{
    game_status ret = N_FINISHED;
    int row = (cell - 1)/3;
    int col = (cell - 1)%3;

    if(board[row][col] != ' ')
    {
        ret = FINISHED;
    }
    else
    {
        board[row][col] = playersign;
        ret = N_FINISHED;
    }
    showBoard(board);
    return ret;
}

game_status checkWinner(char sg)
{
    game_status ret = N_FINISHED;
    // rows
    if((board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][2] == sg)
    || (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][2] == sg)
    || (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][2] == sg))
    {
        ret = FINISHED;
    }
    // cols
    else if((board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[2][0] == sg)
         || (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[2][1] == sg)
         || (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[2][2] == sg))
    {
        ret = FINISHED;
    }
    // diagonals
    else if((board[0][0] == board[1][1] && board[1][1] == board[2][2]  && board[2][2] == sg)
         || (board[2][0] == board[1][1] && board[1][1] == board[0][2]  && board[0][2] == sg))

    {
        ret = FINISHED;
    }
    else
    {
        ret = N_FINISHED;
    }
    return ret;
}

void playTicTacToe()
{
    game_status gameresult = N_FINISHED;
    game_status update_status = N_FINISHED;
    int play_cnt = 0;
    int cell = 0;
    char player_sign = ' ';

    while((gameresult == N_FINISHED) && (play_cnt < MAX_CELLS))
    {
        if(IS_EVEN(play_cnt))
        {
            // player 1
            printf("\nPlayer 1 [ X ] :  ");
            player_sign = PLAYER_ONE_SIGN;
        }
        else
        {
            // player 2
            printf("\nPlayer 2 [ O ] :  ");
            player_sign = PLAYER_TWO_SIGN;
        }
        scanf("%d", &cell);

        if(cell >= MIN_CELLS && cell <= MAX_CELLS )
        {
            update_status = updateBoard(cell, player_sign);
            if(update_status == N_FINISHED )
            {
                gameresult = checkWinner(player_sign);
                if(gameresult == FINISHED)
                {
                    printf("\t *** Player %d Won!! ***\n", player_sign == 'X' ? 1 : 2);
                }
                play_cnt++;
            }
        }
        else if(cell == TERMINATE)
        {
            printf("\n\tGame Terminated\n");
            return;
        }
        else {
            printf("\nPlease Enter a valid cell value\n");
        }
    }
    if ((gameresult == N_FINISHED) || (play_cnt > MAX_CELLS))
    {
        printf("\n\t *** Draw...  ***\n");
    }
    printf("\n\t --- Game Over --- \n");
}



