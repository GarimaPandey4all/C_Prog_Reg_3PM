#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10; // = assignment operator

    a += 30; //shorthand //a = a + 30;

    a *= 30;

    a /= 50;

    a <<= 78;

    a %= 56;

    printf("a is: %d", a);

    return 0;
}
