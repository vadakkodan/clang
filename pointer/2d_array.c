//Purpose is create a 2d array and access each element through pointer variable.

#include <stdio.h>
int main() {
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int *p;
	p = a; //expecting p will give address of a[0][0] and '*p' will give a[0][0] value, ie, 1.
	int i;
	for (i=0;i<9;i++) {
		printf ("Address: %p Value:%3d\n",p+i,*(p+i));
	}
	printf ("%p %d", *a,**a); // dereferencing the array name itself will give the address 1st element of the array

	return 0;
}

