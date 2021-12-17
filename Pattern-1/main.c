#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    //Nested Loops
    //Outer Loop
    for(i = 1; i <= 5; i++) // rows
    {
        //Inner Loop
        for(j = 1; j <= 5; j++) // cols
        {
            //printf("*");
            //printf("%d", i);
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
