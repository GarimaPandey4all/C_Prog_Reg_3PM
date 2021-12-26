#include <stdio.h>
#include <stdlib.h>

//(): function or particular task, provide reuseability

//function has four types:
//
//    1. function without arguments and without return type
//    2. function with arguments and without return type
//    3. function without arguments and with return type
//    4. function with arguments and with return type

//3. function without arguments and with return type

//Function Declaration
//void or null or empty: no return type
int add();

void main()
{
    //function Calling
    int result = add();

    printf("Addition is: %d", result);

    //return 0;
}

//Function Definition
int add()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    return (a + b);
}
