#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("file.txt", "r");

    char ch;

    int linesCount = 0;

    if(fp == NULL)
    {
        printf("Error in Opening File");
        exit(0);
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
        {
            linesCount++;
        }
    }

    printf("Total number of lines are: %d", linesCount+1);

    fclose(fp);
    fp = NULL;

    return 0;
}
