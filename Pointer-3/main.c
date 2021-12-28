#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    int *pnum = NULL;

    pnum = &num1;
    *pnum = 2; // 2
    ++num2; // 1
    num2 += *pnum; //3

    pnum = &num2; // 3
    ++*pnum; // 4

    printf("Num1 = %d, Num2= %d, *Pnum = %d, *Pnum + Num2 = %d",
           num1, num2, *pnum, *pnum + num2);

    return 0;
}
