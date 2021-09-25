//Write a program to convert years into 1. Minutes 2. Hours 3. Days. 4. Months and 5. Seconds, and using switch statements.
#include <stdio.h>
        int a;
	int choice;
	int months;
	int days;
	int hours;
	int minutes;
	int seconds;

int main(){
	//	float d;
	printf("See Years in:");
	printf("\n1. Minuutes");
	printf("\n2. Hours");
	printf("\n3. Days");
	printf("\n4. Months");
	printf("\n5. Seconds");
	printf("\nEnter your Choice:");
	scanf("%d",&choice);
	if (choice > 0 && choice <=5){
		printf("\nEnter Number of Years:");
		scanf("%d",&a);
		//scanf("%d",&b);
	}
	months = a * 12;
	days   = a * 365;
	hours  = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;
	printf("%d,%d,%d,%d,%d",months,days,hours,minutes,seconds);
//	switch (choice)
//	{
//	case 1:
//		c = a+b;
//		printf("Choice was addition,numbers:%d, %d, Result=%d",a,b,c);
//		break;
//
//	case 2:
//		c = a-b;
//		printf("Choice was subtraction,numbers:%d, %d, Result=%d",a,b,c);
//		break;
//        case 3:
//		c = a*b;
//		printf("Choice was Multiplication,numbers:%d, %d, Result=%d",a,b,c);
//		break;
//        case 4:
//		c = a / b;
//		printf("Choice was division,numbers:%d, %d, Result=%d",a,b,c);
//		break;
//       case 5:
//		c = a%b;
//		printf("Choice was Remainder,numbers:%d, %d, Result=%d",a,b,c);
//		break;
//       case 6:
//		if(a<b){
//			printf("Second number %d is greater.",b);
//		}
//		else if (a>b){
//			printf("First number %d is greater.",a);
//		}
//		else
//			printf("Numbers are equal or same");
//	break;
//
//	default:
//		printf("invalid");
//	}
//}
//else{
//	printf("Invalid Choice");
//}
return 0;
}



