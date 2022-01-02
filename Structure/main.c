#include <stdio.h>
#include <stdlib.h>

// 12 bytes
struct Date {

    int day; // 4
    int month; // 4
    int year; // 4

}date;

//struct Date date, date2, date3;

int main()
{
 //   struct Date date, date2, date3;

    date.day = 2;
    date.month = 1;
    date.year = 2022;

    printf("%d %d %d", date.day, date.month, date.year);

    return 0;
}
