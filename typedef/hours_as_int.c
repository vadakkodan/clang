/*Type def is nothing but you can say int data type as ant*/
#include <stdio.h>
#include <stdlib.h>
#define H 60
int main(){
	typedef int hours;
	hours hrs;
	printf("Enter the hours, will convert to minute and seconds:\n");
	scanf("%d", &hrs);
	printf("Minutes:%d\n",hrs*H);
	printf("Seconds:%d\n",hrs*H*H);
	return 0;
}

