#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, rev = 0;

    printf("Enter any number:");
    scanf("%d", &n);

    while(n > 0)
    {
        //n = 121 = 12
        r = n % 10; // 1, 2, 1
        rev = rev * 10 + r; // 1, 12, 121
        n = n / 10; // 12, 1, 0
    }

    printf("Reverse Number is: %d", rev);

    return 0;
}
