#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("file.txt", "w"); // write mode

    if(fp != NULL)
    {
        fprintf(fp, "%s %d", "Hello", 555);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
