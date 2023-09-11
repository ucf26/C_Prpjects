#include "calender.h"

char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
char *days_of_week[]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
int days_of_mnth[12]={31,28,31,30,31,30,31,31,30,31,30,31};

void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void SetColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}


void calendar(int nyr,int nmonth)
{
    
    int start_day = 0;
    int cnt_years = 1;
    system("cls");
    for(;cnt_years < nyr  ; cnt_years++)
    {
        if(cnt_years%4==0)
        {
            start_day+=366;
        }
        else 
        {
            start_day+=365;
        }
    }

    if(nyr%4==0) days_of_mnth[1]=29;

    int month_cnt=0;
    for(month_cnt = 0 ; month_cnt < nmonth - 1 ; month_cnt++)
    {
        start_day+=days_of_mnth[month_cnt];
    }

    start_day = start_day % 7;
    display(nyr , nmonth , start_day , days_of_mnth);
}

void display(int nyr,int nmonth,int tdays,int days[])
{
    int i , j , pos ;
    system("Color 04");
    gotoxy(56,6); printf("%s %d" , month[nmonth -1] , nyr);

    for(i=0 , pos=30 ; i<7 ;i++ , pos+=10)
    {
        gotoxy(pos,8);printf("%s",days_of_week[i]);
    }



    for (i=0 , pos=30 ; i<7 ; i++ , pos+=10)
    {
        // setting the color : blue for sunday , green for other days   
        if(i==6) system("Color 01");
        else system("Color 02");

        gotoxy(pos , 8); 
        printf("%s" , days_of_week[i]);

        // tdays++;
        if(tdays==0||tdays==7) pos = 91;
        if(tdays == 1 ) pos = 31;
        if(tdays == 2 ) pos = 41;
        if(tdays == 3 ) pos = 51;
        if(tdays == 4 ) pos = 61;
        if(tdays == 5 ) pos = 71;
        if(tdays == 6 ) pos = 81;

        for(i=0 , pos , j = 10 ; i<days_of_mnth[nmonth - 1] ; i++ , pos+=10)
        {
            if(pos == 91) SetColor(8);
            else SetColor(7);

            gotoxy( pos, j); printf("%d", i+1);

            if(pos == 91)
            {
                pos = 21;
                j++;
            }
        }

        // drawwing the horizontal lines
        for(i=22;i<102;i++)
        {
            gotoxy(i,4);printf("%c",196);
            gotoxy(i,17);printf("%c",196);
        }

        // drawing all the corner of the rectangle
        gotoxy(21,4);printf("%c",218); // ┌
        gotoxy(102,4);printf("%c",191); // ┐
        gotoxy(21,17);printf("%c",192); // └
        gotoxy(102,17);printf("%c",217);// ┘

        // drawing vertical line
        for(i=5;i<17;i++)
        {
            gotoxy(21,i);printf("%c",179);
            gotoxy(102,i);printf("%c",179);
        }

        // drawing left and the right navigation symbol
        gotoxy(24,11);printf("%c",174); // «
        gotoxy(98,11);printf("%c",175); // »
    }
}
