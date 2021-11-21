#include<stdio.h>

void main()
{
	int hindi, english, maths, sst, science, sum, percentage;
	clrscr();

	printf("Enter Marks:\n");
	scanf("%d %d %d %d %d", &hindi, &english, &maths, &sst, &science);

	sum = hindi + english + maths + sst + science;

	printf("Total Marks: %d\n", sum);

	percentage = (sum / 5);

	printf("Percentage as per the marks: %d", percentage);

	getch();
}