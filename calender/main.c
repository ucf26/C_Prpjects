#include "calender.h"

int _year , _month , _ch ;


int main(){
enter_year:


while(TRUE)
{

    gotoxy(20,4);
    printf("Enter The Year and The Month like (mm | yyyy)...  ");
    
    scanf("%d%d", &_month, &_year);
    calendar(_year,_month);

    while(TRUE)
    {
        re_enter:
        gotoxy(20,20);printf("(*) Enter 1 to go to the next month.");
        gotoxy(20,22);printf("(*) Enter 2 to go to the previous month.");
        gotoxy(20,24);printf("(*) Enter 3 to go to particular year and month.");
        gotoxy(20,26);printf("(*) Enter 4 to Exit.\n");

        scanf("%c",&_ch);
        fflush(stdin);

        switch(_ch)
        {
            case '1': // to the next month
                if(_month==12)
                {
                    _month =1 ;
                    _year++;
                }
                else
                {
                    _month++;
                }
                calendar(_year , _month);
                break;

            case '2': // to the previous month
                if(_month==1)
                {
                    _month = 12 ;
                    _year--;
                }
                else
                {
                    _month--;
                }
                calendar(_year , _month);
                break;

            case '3': // to go to particular year and month
                system("cls");
                goto enter_year;

            case '4': // to Exit
                system("cls");
                gotoxy(50,14);printf("Exiting program.\n\n\n\n\n");
                exit(0);
                break;
            default :
                gotoxy(20,28);printf("Enter a valid choice\n");
                goto re_enter;
                break;
        }

    }

    break;

}

return 0;

}
