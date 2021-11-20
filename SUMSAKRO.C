#include<stdio.h>

void main()
{
//variables/container: it is used to store your values
	//data: 10: numerical/integer
//        int: data type
//	int a = 10; // variable declare / create and initialize / assign
  //	int b = 30;
	int a, b, c;
	clrscr();

	printf("Enter any value for a and b:");
	scanf("%d%d", &a, &b); // take user input at runtime / dynamically
//        & - address of operator

	c = a + b;
	printf("Addition of %d and %d is: %d", a, b, c);
	//printf("Addition is: %d", (a + b)); // +, -, *, /

	//printf("A is: %d\n", a);// %d: format specifier
	// %d: it is used to format integer
	//a = 30;
	//printf("A is : %d", a);
	getch();
}