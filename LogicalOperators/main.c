#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //&&, ||, !
    //a = 5, b = 7

//    && - all conditions must be true
//    || - anyone condition must be true

    printf("AND Operator: %d\n", (a > 5 && b < 10)); // 0
    printf("OR Operator: %d\n", (a > 5 || b < 10)); // 1
    printf("Not Operator: %d", !(a > 5 && b < 10)); // 1

    return 0;
}
