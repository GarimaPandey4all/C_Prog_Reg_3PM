#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;

    ptr = (char *)malloc(15); // 15 bytes

    //string copy
    strcpy(ptr, "Jason");

    printf("String = %s and Address = %u\n", ptr, ptr);

    //Reallocation Memory
    ptr = realloc(ptr, 25);

    //String Concatenation
    strcat(ptr, ".com");

    printf("String = %s and Address = %u", ptr, ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}
