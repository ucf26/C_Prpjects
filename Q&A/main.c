
#include "game.h"


int main(){

    int cur_hints=0, category =0, round=0, ans, score=0, ch;

    printf("\n\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________\n\n");
    printf("\t\t\t**INSTRUCTIONS**\n");
    display_instructions();
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
    printf("\n\t\t________________________________________\n\n");
    printf("\t\t    Choose a Category number for Questions.. :)\n");
    printf("\t\t\t1 - %s\n", "Math");
    printf("\t\t\t2 - %s\n", "Sport");
    printf("\t\t\t3 - %s\n", "History");
    printf("\t\t\t4 - %s\n", "Science");
    printf("\t\t\t5 - %s\n", "General");

    scanf("%d", &category);

    if(RIGHT != category_check(category))
    {
        printf("Enter a valid category number !\n");
        scanf("%d", category);
    }

    int round_cntr=0;

    while(1)
    {
        for(round_cntr = 0; round_cntr < MAX_ROUNDS; round_cntr++)
        {
            int idx = gen_number();
            display_question(idx, category);
            display_answers(idx, category);
            scanf("%d", &ans);
            if(RIGHT == check(idx, category, ans))
            {
                printf("Correct..!!\n");
                score++;
            }
            else
            {
                printf("Wrong Answer !\n");
                if(cur_hints < MAX_HINTS)
                {
                    printf("You have %d hints , click 1 to display the hint \n", 3-cur_hints);
                    scanf("%d", &ch);
                    if(1 == ch)
                    {
                        cur_hints++;
                        display_hint(idx, category);
                        printf("\n\t\tHere is the questions again..!\n");
                        display_answers(idx, category);
                        printf("\t\t\tNow, Enter the answer :)\n");
                        scanf("%d", &ans);
                        if(RIGHT == check(idx, category, ans))
                        {
                            score++;
                        }
                        else 
                        {
                            score--;
                        }
                    }
                }
            }
        }

        printf("\t\tYour score is :) %d\n\n\n", score);

        printf("\t\tThe game has finished..\n");
        printf("\t\t\t>> for another game enter 1\n");
        printf("\t\t\t>> to exit enter other key..");
        scanf("%d", &ch);
        if(1 == ch)
        {
            continue ;
        }
        else 
        {
            break;
        }
    }
    printf("\t\t\texitting...:)\n");
    return 0;
}
