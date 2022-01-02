#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, *ptr, sum = 0;

    printf("Enter no of elements:");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));

    if(ptr == NULL)
    {
        printf("Error memory not allocated");
        exit(0);
    }

    printf("Enter elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum is: %d", sum);

    free(ptr);
    ptr = NULL;

    return 0;
}
