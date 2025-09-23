#include <stdio.h>

int main()
{
	int m, n;
	
	printf("Enter the value of first number:\t");
	scanf("%d", &m);
	printf("\n");
	printf("Enter the value of second number\t");
	scanf("%d", &n);
	printf("\n");
	(m>n)?printf("m(%d) is greater than n(%d)", m,n):printf("n(%d) is greater than m(%d)", n,m);
	
	return 0;
}
