#include<stdio.h>
int nu,di,result;
int re;
void main(){
	printf("Enter the number:");
	scanf("%d", &nu);
	//result = nu / 16;
	//re = nu % 16;
	//printf("%d,%d",result,re);
	while (nu >= 16) {
		result = nu/16;
		re = nu % 16;
	        printf("%d,%d",result,re);
		nu = result;
	}


}



