#include<stdio.h>
int main()
{
	int x, y, z, highest;
	printf("Enter the value of first number:\t\t");
	scanf("%d", &x);
	printf("\nEnter the value of second number:\t\t");
	scanf("%d", &y);
	printf("\nEnter the value of third number:\t\t");
	scanf("%d", &z);
	
	highest = (x>y)? ((x>z)? x:z) : ((y>z)? y:z);
	printf("\nThe greatest number is %d.", highest);
	
	return 0;
}
