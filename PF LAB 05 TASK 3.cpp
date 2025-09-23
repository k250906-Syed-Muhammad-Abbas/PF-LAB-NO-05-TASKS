#include <stdio.h>
#include <math.h>
int main()

{
	
	int number;
	
	printf("enter the number to find its square root:\t\t");
	scanf("%d", &number);
	printf("\nThe square Root of %d is %.2f",number, sqrt(number));
	
	return 0;
}
