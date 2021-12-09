#include <stdio.h>
#include <stdlib.h>
//
//Decision Making Statements or Comparison Statements:
//
//    1. if-else
//    2. if-else if-else
//    3. switch, Menu Driven Program
//    4. Ternary Operator / Conditional Operator, Shortand of If-else

int main()
{
    int a, b;

    printf("Enter value for a and b:");
    scanf("%d %d", &a, &b);

//    if(a > b)
//    {
//        printf("A is Greater");
//    }
//    else {
//        printf("B is Greater");
//    }

//    Ternary Operator / Conditional Operator- ?:
//
//    Ternary - 3
//
//    Expression-1    Expression-2    Expression-3
//    (condition) ?   true            : false;

    (a > b) ? printf("A is Greater") : printf("B is Greater");

    return 0;
}
