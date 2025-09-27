#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter the value of first number that would be a:\t\t");
	scanf("%d", &a);
	printf("\nEnter the value of second number that would be b:\t\t");
	scanf("%d", &b);
	
	if(a==b)
	{
		printf("\na==b\t\tTRUE");
	}
	else 
	{
		printf("\na==b\t\tFALSE");
	}

	
	if(a!=b)
	{
		printf("\n\na!=b\t\tTRUE");
	}
	else 
	{
		printf("\n\na!=b\t\tFALSE");
	}

	
	if(a>b)
	{
		printf("\n\na>b\t\tTRUE");
	}
	else 
	{
		printf("\n\na>b\t\tFALSE");
	}

	
	if(a<b)
	{
		printf("\n\na<b\t\tTRUE");
	}
	else 
	{
		printf("\n\na<b\t\tFALSE");
	}
	
	
	if(a>=b)
	{
		printf("\n\na>=b\t\tTRUE");
	}
	else 
	{
		printf("\n\na>=b\t\tFALSE");
	}
	
	
	if(a<=b)
	{
		printf("\n\na<=b\t\tTRUE");
	}
	else 
	{
		printf("\n\na<=b\t\tFALSE");
	}
	
	return 0;
}
