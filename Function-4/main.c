#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

//(): function or particular task, provide reuseability

//function has four types:
//
//    1. function without arguments and without return type
//    2. function with arguments and without return type
//    3. function without arguments and with return type
//    4. function with arguments and with return type

//4. function with arguments and with return type

//Function Declaration
//void or null or empty: no return type
int add(int, int);

int main()
{
    //function Calling
    int result = add(10, 50); // 10, 50: Actual Arguments or Function Arguments

    printf("Addition is: %d", result);

    return 0;
}

//Function Definition
void add(int a, int b) // a, b: Formal Arguments or Function Parameters
{
    return (a + b);
}
