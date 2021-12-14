#include <stdio.h>
#include <stdlib.h>

//Repeat/Iterate: Loop
//
//types:
//
//    1. for loop
//    2. while loop
//    3. do-while loop

int main()
{
    int i = 1, n;

    printf("Enter any number:");
    scanf("%d", &n);

//    for(i = 1; i <= 10; i++)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//        //printf("Hello World\n");
//    }

//    while(i <= 10)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//        i++;
//    }

    do {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }while(i <= 10);

    return 0;
}
