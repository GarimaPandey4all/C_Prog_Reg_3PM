#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL; // FILE: Structure pointer

    char c;

    fp = fopen("file.txt", "r"); // r: read mode

    if(fp == NULL)
    {
        printf("Error in Opening File");
        exit(0);
    }

    while((c = fgetc(fp)) != EOF) // EOF: End of File
    {
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
