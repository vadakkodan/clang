#include <stdio.h>
#include <stdlib.h>
int main() {
	int *arr1[3] = {1,2,3};
	int *arrp[3];
	int i;
	for (i=0;i<3;i++) {
		arrp[i] = arr1 + i;
		//printf("%d %p",*arrp[i], arrp[i]);
	}
	for (i=0;i<3;i++) {
		//arrp[i] = arr1[i];
		printf("%d %p\n",*arrp[i], arrp[i]);
	}
	printf ("\t%p\n", arrp[2]);
	return 0;
}
