#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>



#define MAX_QUESTIONS   20
#define MAX_CATEGORY    5
#define MAX_CHOICES     4
#define MAX_ROUNDS      5
#define MAX_HINTS       3
#define MATH            1
#define SPORT           2
#define HISTORY         3
#define SCIENCE         4
#define GENERAL         5  
#define ZERO            0


typedef struct{
    char *question;
    char *answer[4];
    char *hint;
    char correct_answer;
}ques_t;

typedef enum{
    NOT_RIGHT,
    RIGHT
}check_t;

extern ques_t sport[20];
extern ques_t random[20];
extern ques_t science[20];
extern ques_t history[20];
extern ques_t general_knowledge[20];


void display_instructions();
void display_question(int idx, int category);
void display_answers(int idx, int category);
void display_hint(int idx, int category);
int gen_number();
check_t category_check(int category);
check_t check(int idx, int category, int ans);

#endif