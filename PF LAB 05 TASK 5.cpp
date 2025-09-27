#include<stdio.h>
int main()
{
	int course;
	char grade;	
	printf("Please Enter The Course Number:\n\n1)Calculus\n2)Programming Fundamentals\n3)English\n\n");
	scanf("%d", &course);
	
	switch (course)
	{
	case 1:		
		printf("\nPlease Enter Your Grade from A to F:\t\t");
		scanf(" %c", &grade);
			switch (grade)
		{
			case 'A':
			case 'a':
				printf("YOUR GRADES ARE EXCEPTIONAL IN CALCULUS!");
			break;
			case 'B':
			case 'b':
				printf("YOUR GRADES ARE GOOD IN CALCULUS!");
			break;
			case 'C':
			case 'c':
				printf("YOUR GRADES ARE AVERAGE IN CALCULUS!");
			break;
			case 'D':
			case 'd':
				printf("YOUR GRADES NEED A LOT OF IMPROVEMENT IN CALCULUS!");
			break;
			case 'F':
			case 'f':
				printf("YOU FAILED YOUR CALCULUS COURSE!");
			break;
			
			default:
				printf("YOU ENTERED INVALID GRADE");	
		}
		break;
		
		case 2:		
		printf("\nPlease Enter Your Grade from A to F:\t\t");
		scanf(" %c", &grade);
			switch (grade)
		{
			case 'A':
			case 'a':
				printf("YOUR GRADES ARE EXCEPTIONAL IN PROGRAMMING FUNDAMENTAL!");
			break;
			case 'B':
			case 'b':
				printf("YOUR GRADES ARE GOOD IN PROGRAMMING FUNDAMENTAL!");
			break;
			case 'C':
			case 'c':
				printf("YOUR GRADES ARE AVERAGE IN PROGRAMMING FUNDAMENTAL!");
			break;
			case 'D':
			case 'd':
				printf("YOUR GRADES NEED A LOT OF IMPROVEMENT IN PROGRAMMING FUNDAMENTAL!");
			break;
			case 'F':
			case 'f':
				printf("YOU FAILED YOUR PROGRAMMING FUNDAMENTAL COURSE!");
			break;
			
			default:
				printf("YOU ENTERED INVALID GRADE");	
		}
		break;
		
		case 3:		
		printf("\nPlease Enter Your Grade from A to F:\t\t");
		scanf(" %c", &grade);
			switch (grade)
		{
			case 'A':
			case 'a':
				printf("YOUR GRADES ARE EXCEPTIONAL IN ENGLISH!");
			break;
			case 'B':
			case 'b':
				printf("YOUR GRADES ARE GOOD IN ENGLISH!");
			break;
			case 'C':
			case 'c':
				printf("YOUR GRADES ARE AVERAGE IN ENGLISH!");
			break;
			case 'D':
			case 'd':
				printf("YOUR GRADES NEED A LOT OF IMPROVEMENT IN ENGLISH!");
			break;
			case 'F':
			case 'f':
				printf("YOU FAILED YOUR ENGLISH COURSE!");
			break;
			
			default:
				printf("YOU ENTERED INVALID GRADE");	
		}
		break;
		
		default:
			printf("YOU ENTERED THE WRONG COURSE NUMBER");
		break;
	}
	return 0;
}
