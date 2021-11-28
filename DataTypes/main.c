#include <stdio.h>
#include <stdlib.h>

//bit - binary - 2 (0 or 1)
//1 byte = 8 bits

//16 - bit compiler - int - 2 bytes
//32 - bit compiler - int - 4 bytes

int main()
{
    int a = 10; // 2 or 4
    float pi = 3.14f; // 4
    char g = 'F'; // 1
    double d = 534675.49567; // 8

    printf("a is: %d\n", a);
    printf("pi is: %.2f\n", pi);
    printf("g is: %c\n", g);
    printf("d is: %lf\n", d);

    printf("size of int: %d\n", sizeof(int));
    printf("size of float: %d\n", sizeof(pi));
    printf("size of char: %d\n", sizeof(g));
    printf("size of double: %d\n", sizeof(double));

    return 0;
}
