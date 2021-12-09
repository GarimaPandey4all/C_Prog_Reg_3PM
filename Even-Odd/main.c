#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

//    if(n % 2 == 0)
//    {
//        printf("Number is Even");
//    }
//    else {
//        printf("Number is Odd");
//    }

    (n % 2 == 0) ? printf("Number is even") : printf("Number is Odd");

    return 0;
}
