#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *pvalue = &a;

    printf("A is: %d\n", a);
    printf("*pvalue is: %d\n", *pvalue); // value of a variable
    printf("pvalue is: %u\n", pvalue); // address of a variable
    printf("Address of pvalue: %u\n", &pvalue); // address of pointer variable

    return 0;
}
