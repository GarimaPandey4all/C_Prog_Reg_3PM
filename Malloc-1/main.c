#include <stdio.h>
#include <stdlib.h>

//DMA: Dynamic Memory Allocation, (Heap Memory of RAM)

//1. Malloc
//2. Calloc
//3. Realloc

//Malloc stands for memory allocation
//The malloc() function reserves the block of memory of the specified number of bytes.
//And, it returns a pointer of void which can be casted into pointers of any type / form.
//
//syntax:
//
//    ptr = (castType *)malloc(size);


int main()
{
    int size;
    char *text = NULL;

    printf("Enter limit of the text:");
    scanf("%d", &size);

    //Memory Allocation
    text = (char *)malloc(size * sizeof(char));

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
