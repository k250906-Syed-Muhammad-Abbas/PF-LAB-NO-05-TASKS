#include <stdio.h>
int main()
{
	int x, y;
	printf("enter the value of x: \t");
	scanf("%d", &x);
	printf("enter the value of y: \t");
	scanf("%d", &y);
	
//(x > 5) && (y < 10)
printf("\n\n");
if(x > 5 && y < 10)
{
	printf("The condition \"(x > 5) && (y < 10)\" is true.");
}
else
{
	printf("The condition \"(x > 5) && (y < 10)\" is false.");
}

//(x == 10) || (y == 5)
printf("\n\n");
if(x == 10 || y == 5)
{
	printf("Either x is equal to 10 or y is equal to 5");
}
else
{
	printf("Neither x is 10 nor y is 5");
}

//!(x == y)
printf("\n\n");
if (!(x==y))
{
	printf("x and y are not equal.");
}
else
{
	printf("x and y are equal.");
}
return 0;
}
