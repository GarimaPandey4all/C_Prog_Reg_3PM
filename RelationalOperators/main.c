#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //==, != , >, <, >=, <=
    //a = 5, b = 7
    printf("Equal to : %d\n", (a == b));
    printf("Not Equal to : %d\n", (a != b));
    printf("Greater than : %d\n", (a > b));
    printf("Less than : %d\n", (a < b));
    printf("Greater than and Equal to : %d\n", (a >= b));
    printf("Less than and Equal to : %d\n", (a <= b));

    return 0;
}
