#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    char c = 'A';
    float f = 34.5f;

    void *ptr;

    ptr = &a;
    printf("Int is: %d\n", *(int *)ptr); // void to int

    ptr = &c;
    printf("Char is: %c\n", *(char *)ptr); // void to char

    ptr = &f;
    printf("Float is: %.2f\n", *(float *)ptr); // void to float

    return 0;
}
