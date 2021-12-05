#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

//    &, |, ^, <<, >>, ~ (Not Operator or One's Complement)

    printf("AND-Bitwise Operators: %d\n", (a & b));
    printf("OR-Bitwise Operators: %d\n", (a | b));
    printf("X-OR Bitwise Operators: %d\n", (a ^ b));
    printf("Left Shift Bitwise Operators: %d\n", (a << 2));
    printf("Right Shift Bitwise Operators: %d\n", (a >> 2));

    return 0;
}
