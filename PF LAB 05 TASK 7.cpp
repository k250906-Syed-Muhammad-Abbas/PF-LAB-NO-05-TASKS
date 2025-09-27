#include<stdio.h>
int main()
{
	int mod, a, b;
	printf("Enter the value of first number:\t\t");
	scanf("%d", &a);
	printf("\nEnter the value of second number:\t\t");
	scanf("%d", &b);
	mod = a % b;
	float div = (float)a /b;
	
	printf("\nThe sum of the two numbers is %d.", a+b);
	printf("\n\nThe difference of the two numbers is %d.", a-b);
	printf("\n\nThe product of the two numbers is %d.", a*b);
	printf("\n\nThe quotient of the two numbers is %.2f.", div);
	printf("\n\nThe remainder of the two numbers is %d", mod);
	return 0;
}
