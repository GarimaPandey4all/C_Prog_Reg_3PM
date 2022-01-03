#include <stdio.h>
#include <stdlib.h>

//4 bytes
union Date {

    int day; // 4
    int month; // 4
    int year; // 4

}date, *pdate;

//union Date date, date2, date3;

int main()
{
 //   union Date date, date2, date3;

    pdate = &date;

    pdate->day = 2;
     printf("%d ", pdate->day);
    pdate->month = 1;
     printf("%d ", pdate->month);
    pdate->year = 2022;
    printf("%d", pdate->year);

    return 0;
}
