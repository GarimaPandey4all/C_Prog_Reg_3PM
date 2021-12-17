#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ASCII Character Table

//    A-Z : 65-90
//    a-z : 97-122

    int i, j;

    for(i = 65; i <= 69; i++)
    {
        for(j = 65; j <= 69; j++)
        {
            //printf("%c", i);
            printf("%c", j);
        }
        printf("\n");
    }


//    char i, j;
//
//    for(i = 'A'; i <= 'E'; i++)
//    {
//        for(j = 'A'; j <= 'E'; j++)
//        {
//            printf("%c", i);
//        }
//        printf("\n");
//    }

    return 0;
}
