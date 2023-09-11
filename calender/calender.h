#ifndef _CALENDER_H
#define _CALENDER_H_

#include <stdio.h>
#include <windows.h>

#define COLOR_BOLD  "\e[1m"
#define COLOR_OFF   "\e[m"




/**
 * @brief function to move the cursor of the console
 * @param x the-X indix of the cursor location
 * @param y the-Y indix of the cursor location
 * @return
 */
void gotoxy(int x,int y);

/**
 * @brief function to move the cursor of the console
 * @param x the-X indix of the cursor location
 * @param y the-Y indix of the cursor location
 * @return
 */
void SetColor(int ForgC);
int getkey();
void calendar(int nyr,int nmonth);
void display(int nyr,int nmonth,int tdays,int days[]);



#endif