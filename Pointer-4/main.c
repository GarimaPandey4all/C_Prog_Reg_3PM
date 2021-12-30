#include <stdio.h>
#include <stdlib.h>

//pointer to a constant: value can't be changed
//constant pointer: address can't be changed


int main()
{
    const int a = 10;
    int n = 40;
    //pointer to a constant and constant pointer
    const int *const ptr = &a;

    //pointer to a constant
    //const int *ptr = &a;

    //constant pointer
    //int *const ptr = &a;

    //*ptr = 20; // error

    //ptr = &n; // error

    //a = 20; // error

    return 0;
}
