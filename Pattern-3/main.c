#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--) // rows
    {
        for(j = 5; j >= 1; j--) // cols
        {
            //printf("%d", i);
            printf("%d", j);
        }

        printf("\n");
    }


    return 0;
}
