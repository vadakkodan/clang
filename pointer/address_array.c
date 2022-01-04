//Write a program to display two-dimensional array elements together with their addresses.
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[2][2] = {{1,2},{3,4}};
	int *p;
	p = &a[0][0];
	int i,j;
	for (i=0;i<2;i++) {
		for (j=0;j<2;j++) {
			printf ("%d[%p]\t",a[i][j],p);
			p++ ;
		}
		printf ("\n");
	}
	return 0;
}

