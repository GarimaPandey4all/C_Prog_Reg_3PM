#include <stdio.h>
#include <stdlib.h>

int main()
{
    //operator:symbol
//
//    1. Arithmetic Operators
//    2. Comparison/Relational Operators
//    3. Logical Operators
//    4. Bitwise Operators
//    5. Assignment Operators

    //Arithmetic Operators:
        //+, -, *, /, %(modulus operator), ++(Increment), --(Decrement)
//
//        a + b: expression
//        a, b: operands
//        +: operator

    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("+: %d\n", (a + b));
    printf("-: %d\n", (a - b));
    printf("*: %d\n", (a * b));
    printf("/: %d\n", (a / b));
    //a = 5, b = 10
    printf("%: %d\n", (a % b));
    printf("++ Pre-Increment: %d\n", (++a)); // a = 5 + 1 = 6
    printf("++ Post-Increment: %d\n", (a++)); // a = 6
    printf("a is: %d\n", a); // a = 7
    printf("++ Pre-Decrement: %d\n", (--a)); // a = 7 - 1 = 6
    printf("++ Post-Decrement: %d\n", (a--)); // a = 6
    printf("a is: %d\n", a); // a = 5

    return 0;
}
