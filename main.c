/******************************************************************************

practical 46- calculator using functions
*******************************************************************************/

#include <stdio.h>

int main()
{
   
	int num1, num2, choice;
	printf("enter two numbers : ");
	fflush(stdout);
	scanf("%d %d", &num1, &num2);
	printf("1. addition\n 2. subtraction\n 3. multiplication\n 4. division\n ");
	printf("enter your choice : ");
	scanf("%d", &choice);

	switch (choice){
	case 1:
		printf("sum: %d\n", num1+num2);
		break;
	case 2:
		printf("difference : %d\n", num1-num2);
		break;
	case 3:
		printf("product : %d\n", num1*num2);
		break;
	case 4:
	if (num2!=0){
		printf("quotient : %d\n", num1/num2);
	}else{
			printf("error! division by zero is not allowed\n");
	}
	break;

default:
	printf("error! invalid choice: ");
	}

 return 0;
} 