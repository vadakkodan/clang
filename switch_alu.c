//Write a program to provide multiple functions such as l. Addtion 2. Subtraction 3. Multiplication 4. Division 5. Remainder calculation and 6. Larger out of two by using switch statements.
#include <stdio.h>
int main(){

	int a,b,c;
	int choice;
//	float d;
	printf("The Choices");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n5. Remainder");
	printf("\n6. Larger out of two nos.");
	printf("\nEnter your Choice:");
	scanf("%d",&choice);
	if (choice > 0 && choice <=6){
		printf("\nEnter two numbers:");
		scanf("%d",&a);
		scanf("%d",&b);
	}
	switch (choice)
	{
	case 1:
		c = a+b;
		printf("Choice was addition,numbers:%d, %d, Result=%d",a,b,c);
		break;

	case 2:
		c = a-b;
		printf("Choice was subtraction,numbers:%d, %d, Result=%d",a,b,c);
		break;
        case 3:
		c = a*b;
		printf("Choice was Multiplication,numbers:%d, %d, Result=%d",a,b,c);
		break;
        case 4:
		c = a / b;
		printf("Choice was division,numbers:%d, %d, Result=%d",a,b,c);
		break;
       case 5:
		c = a%b;
		printf("Choice was Remainder,numbers:%d, %d, Result=%d",a,b,c);
		break;
       case 6:
		if(a<b){
			printf("Second number %d is greater.",b);
		}
		else if (a>b){
			printf("First number %d is greater.",a);
		}
		else
			printf("Numbers are equal or same");
	break;

	default:
		printf("invalid");
	}
//}
//else{
//	printf("Invalid Choice");
//}
return 0;
}



