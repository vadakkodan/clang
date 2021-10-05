#include<stdio.h>
#include<stdlib.h>
int a[5];
int main(){
	int i,sum = 0;
	printf("Enter 5 Values:");
	for (i=0;i<5;i++) {
		scanf ("%d", &a[i]);
	}
	for (i=0;i<5;i++){
		sum = sum  + a[i];
	}

	printf("Sum is: %d\n",sum);
	return 0;
}

