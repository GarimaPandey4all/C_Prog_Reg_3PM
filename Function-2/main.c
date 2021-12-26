#include <stdio.h>
#include <stdlib.h>

//(): function or particular task, provide reuseability

//function has four types:
//
//    1. function without arguments and without return type
//    2. function with arguments and without return type
//    3. function without arguments and with return type
//    4. function with arguments and with return type

//2. function with arguments and without return type

//Function Declaration
//void or null or empty: no return type
void add(int, int);

int main()
{
    //function Calling
    add(10, 50); // 10, 50: Actual Arguments or Function Arguments
    add(50, 70);

    return 0;
}

//Function Definition
void add(int a, int b) // a, b: Formal Arguments or Function Parameters
{
    printf("Addition is: %d\n", (a + b));
}
