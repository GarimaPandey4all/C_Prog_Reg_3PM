#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 10;
    int number = 50;
    int *pvalue = NULL;

    pvalue = &value;

    printf("value is: %d\n", *pvalue);

    *pvalue += 50;

    printf("value is: %d\n", *pvalue);

    pvalue = &number;

    printf("Number is: %d", *pvalue);

    return 0;
}
