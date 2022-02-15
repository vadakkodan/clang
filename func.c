#include<stdio.h>
#include<math.h>

float total(int *qty, float *price) {
	float total;
	total = (*qty)*(*price);
	
	return total;
}
int main () {
	int quantity;
	float rate;
	float bill;
	scanf("%d %f", &quantity,&rate);
	bill =total(&quantity,&rate);
	
	printf("%0.2f",bill);
	return 0;
}


