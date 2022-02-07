#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main() {
	char ch;
	int f;
	enum ctype {Letter,Digit,Other};
	
	printf("\nEnter any character ");
	scanf("%c",&ch);
	//ch=getch();
	f=isalpha(ch);
	if(f!=0)
		printf("\n %c is %d type of symbol ",ch,Letter);
	//else 
	//	printf("\n %c is %d type of symbol ",ch,Digit);
	else
	{
		f=isdigit(ch);
		if(f!=0)
			printf("\n %c is %d type of symbol ",ch,Digit);
		else
			printf("\n %c is %d type of symbol ",ch,Other);
	}
}
