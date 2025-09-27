#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter the value of first number:\t\t");
	scanf("%d", &a);
	printf("\nEnter the value of second number:\t\t");
	scanf("%d", &b);
	
    printf("a & b =\t\t %d\n", a & b);                  //BITWISE AND(&)
    
    printf("a | b =\t\t %d\n", a | b);                //BITWISE OR(|)
    
	printf("a ^ b =\t\t %d\n", a ^ b);              //BITWISE XOR(^)
    
	printf("~a =\t\t %d\n", ~a);                  //BITWISE NOT(~)
    
	printf("a << 1 =\t %d\n", a << 1);          //SHIFT LEFT
    
	printf("a >> 1 =\t %d\n", a >> 1);        //SHIFT RIGHT
    
    return 0;
}

