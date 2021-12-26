#include <stdio.h>
#include <stdlib.h>

//(): function or particular task, provide reuseability

//function has four types:
//
//    1. function without arguments and without return type
//    2. function with arguments and without return type
//    3. function without arguments and with return type
//    4. function with arguments and with return type

//1. function without arguments and without return type

//Function Declaration
//void or null or empty: no return type
//void add();

int main()
{
    //function Calling
    add();

    return 0;
}

//Function Definition
void add()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("Addition is: %d", (a + b));
}
