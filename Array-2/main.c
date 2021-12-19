#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[5], i;

    printf("Enter values in Array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("Values in Array are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d  ", marks[i]);
    }

    return 0;
}
