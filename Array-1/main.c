#include <stdio.h>
#include <stdlib.h>

//Array: Store multiple values in a single variable.
//It contains similar types of data.
//Homogeneous Mixture

//In array: index number start from 0 and end to n - 1.

int main()
{
    //Traditional Way of Initialization
    int lists[5] = {1, 2, 3, 4, 5}; // 5 - size of the Array
    //Compile Time Initialization
    int marks[] = {34, 56, 78, 90, 100};
    int i;

    //[] - subscript operator / closed bracket

    printf("%d\n", lists[2]);

    for(i = 0; i < 5; i++)
    {
        printf("%d  ", lists[i]);
    }

    printf("\n*****************************\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d  ", marks[i]);
    }

    printf("\nAddress of i: %u\n", &i);
    printf("First Location of the array: %u\n", &lists[0]);
    printf("Second Location of the array: %u\n", &lists[1]);
    printf("Third Location of the array: %u\n", &lists[2]);

    return 0;
}
