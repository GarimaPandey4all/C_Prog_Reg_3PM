#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 0;
    int *ptr;

    printf("Enter any value:");
    scanf("%d", ptr);

    printf("You Entered : %d", *ptr);

    return 0;
}
