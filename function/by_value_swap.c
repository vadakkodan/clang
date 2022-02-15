#include<stdio.h>
#include<stdlib.h>
int swap(int *x, int *y);
int main() {
	int a,b;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("Numbers after swap function,expect no change: %d %d\n",a,b);
	return 0;
	       
}
int swap(int *x,int *y) {
	int tmp=0;
	tmp = *x;
	*x=*y;
	*y=tmp;
	printf("Inside the swap function a and b values: %d %d\n", *x,*y);
	return 0;
}



