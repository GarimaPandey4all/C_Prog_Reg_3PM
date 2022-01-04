#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;

    int length;

    fp = fopen("file.txt", "r");

    if(fp == NULL)
    {
        printf("Error in Opening File");
        exit(0);
    }

    //moving pointer to end
    fseek(fp, 0, SEEK_END);

    //tell position of pointer
    length = ftell(fp);

    printf("Total size of the file is: %d", length);

    fclose(fp);
    fp = NULL;

    return 0;
}
