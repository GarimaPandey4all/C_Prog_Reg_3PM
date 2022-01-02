#include <stdio.h>
#include <stdlib.h>

//Calloc stands for contigous allocation
//
//The malloc() function allocates memory and leaves the memory unintialized.
//whereas, the calloc() function allocates memory and also initialized all bits to zero.

//syntax:
//
//    ptr = (castType *)calloc(n, size);


int main()
{
    int size;
    char *text = NULL;

    printf("Enter limit of the text:");
    scanf("%d", &size);

    //Memory Allocation
    text = (char *)calloc(size , sizeof(char));

    if(text != NULL)
    {
        printf("Enter some text:");
        scanf(" ");
        gets(text);

        printf("Inputted text is: %s", text);
    }

    //Memory Deallocation

    free(text);
    text = NULL;

    return 0;
}
