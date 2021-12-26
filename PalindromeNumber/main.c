#include <stdio.h>
#include <stdlib.h>

int main()
{
//    121 = 121 P
//    123 = 321 NP

    int n, r, sum = 0, temp;

    printf("Enter any number:");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        //n = 121 = 12
        r = n % 10; // 1, 2, 1
        sum = sum * 10 + r; // 1, 12, 121
        n = n / 10; // 12, 1, 0
    }

    n = temp;

    if(n == sum)
    {
        printf("Palindrome Number");
    }
    else {
        printf("Not Palindrome Number");
    }

    return 0;
}
