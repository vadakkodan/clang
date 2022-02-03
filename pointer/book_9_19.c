//Write a program to display two-dimensional array elements together with their addresses.
#include <stdio.h>
#include <stdlib.h>

void main() {
	int i,j=1,*p;
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	//clear;
	printf("\tElements of An Array with their addresses\n\n");
	p = &a[0][0];
	for (i=0;i<9;i++,j++) {
		printf("%5d [%5p]",*(p),p);
		p++;
		if (j==3) {
			 printf("\n");
			 j=0;
		}
	}
}
