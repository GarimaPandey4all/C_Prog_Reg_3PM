#include <stdio.h>
#include <stdlib.h>

//4 bytes
union Date {

    int day; // 4
    int month; // 4
    int year; // 4

}date;

//union Date date, date2, date3;

int main()
{
 //   union Date date, date2, date3;

    date.day = 2;
     printf("%d\n", date.day);
    date.month = 1;
     printf("%d\n", date.month);
    date.year = 2022;
    printf("%d", date.year);

    return 0;
}
