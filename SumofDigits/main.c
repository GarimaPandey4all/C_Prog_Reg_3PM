#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, sum = 0;

    printf("Enter any number:");
    scanf("%d", &n);

    while(n > 0)
    {
        //n = 121 = 12
        r = n % 10; // 1, 2, 1
        sum = sum + r;
        n = n / 10; // 12, 1, 0
    }

    printf("Sum of Digits Number is: %d", sum);

    return 0;
}
