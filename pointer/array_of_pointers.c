#include <stdio.h>
#include <stdlib.h>
void main() {
	int *arrp[3];
	int *arr1[3] = {5,10,15},k;
	//printf ("arr1 %p", arr1);
	for(k=0;k<3;k++) {

		printf("arrp: %p\n",arrp);
		printf("arr1: %p\n",arr1);
		arrp[k]=arr1;
		printf ("%p %p %d\n",arr1,arrp,k);
	}
	//clrscr();
	printf("\n\tAddress Element\n");
	for(k=0;k<3;k++)
		arrp[k]=arr1+k;
	//clrscr();
	printf("\n\tAddress Element\n");
	for(k=0;k<3;k++) {
		printf("\t%p",arrp[k]);
		printf("\t%7d \n",*(arrp[k]));
	//	printf("\t%7d \n",*(arr1[k]));
	}
}
