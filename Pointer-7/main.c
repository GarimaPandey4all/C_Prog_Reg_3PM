#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Enter any value for x and y:");
    scanf("%d %d", &x, &y);

    //add(10, 30); // call by value
    add(&x, &y); // call by reference

    return 0;
}

void add(int *a, int *b)
{
    printf("Addition is: %d", (*a + *b));
}
