#include<stdio.h>
int n1,n2;
int main() {
	printf(" Enter Two Numbers:");
	scanf("%d",&n1);
	scanf("%d",&n2);
	if (n1 > n2){
		printf("%d is greater than %d",n1,n2);
	}
	else if ( n1 < n2){
		printf("%d is less than %d",n1,n2);
	}
	else
		printf("Entered numbers are equal and same");
}

