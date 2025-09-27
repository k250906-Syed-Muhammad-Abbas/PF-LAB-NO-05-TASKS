#include<stdio.h>
int main()
{
	int x, y, z;
	
	printf("Enter the value of the first number:\t\t");
	scanf("%d", &x);
	
	printf("\nEnter the value of the second number:\t\t");
	scanf("%d", &y);	
	
	printf("\nEnter the value of the third number:\t\t");
	scanf("%d", &z);
	
	printf("\n");
	if(x>y)
	{
		if(x>z)
		{
			printf("The greatest is x of value %d", x);
		}
		else 
		{
			printf("The greatest is z of value %d", z);
		}
	}
	
	else
	{
		if(y>z)
		{
			printf("The greatest is y of value %d", y);
		}
		else
		{
			printf("The greatest is z of value %d", z);
		}	
	}
	return 0;
}
