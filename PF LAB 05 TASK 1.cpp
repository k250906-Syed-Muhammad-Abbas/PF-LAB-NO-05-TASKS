#include<stdio.h>
int main()
{
	
	float a, b;
	
	//TO SOLVE EQUATION = a + b * (a - b)/2
	
	printf("Enter the value of a:\t\t");
	scanf("%f", &a);

	printf("Enter the value of b:\t\t");
	scanf("%f", &b);
	
	printf("\n\nThe first statement is (a - b):\t %.2f", a-b);
	printf("\n\nThe second statement is (a - b)/2:\t %.2f", (a-b)/2);
	printf("\n\nThe third statement is b*(a - b)/2:\t %.2f", b*(a-b)/2);
	printf("\n\nThe fourth statement is a+b*(a - b)/2:\t %.2f", a+b*(a-b)/2);
	
	return 0;
	
	}


