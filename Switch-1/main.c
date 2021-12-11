#include <stdio.h>
#include <stdlib.h>

//Switch: Menu Driven Program
//Repetition/Iteration: Loop

int main()
{
    int choice;
    int a, b;

    while(1) // 1- always true, infinite loop/repetition
    {
        printf("\n\n************Calculator*************\n\n");
        printf("Press 1. Addition\n");
        printf("Press 2. Subtraction\n");
        printf("Press 3. Multiplication\n");
        printf("Press 4. Division\n");
        printf("Press 5. Exit\n");
        printf("\n\nEnter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the value for a and b:");
                scanf("%d %d", &a, &b);

                printf("Addition is: %d\n", (a + b));
                break;

            case 2:
                printf("Enter the value for a and b:");
                scanf("%d %d", &a, &b);

                printf("Subtraction is: %d\n", (a - b));
                break;

            case 3:
                printf("Enter the value for a and b:");
                scanf("%d %d", &a, &b);

                printf("Multiplication is: %d\n", (a * b));
                break;

            case 4:
                printf("Enter the value for a and b:");
                scanf("%d %d", &a, &b);

                printf("Division is: %d\n", (a / b));
                break;

            case 5:
                exit(0); // exit the program

            default:
                printf("Invalid Choice");
        }
    }

    //printf("Outside the Switch Block");

    return 0;
}
