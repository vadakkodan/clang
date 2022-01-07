#include <stdio.h>
int main() {
	int a[3]= {1,2,3},i;
	int *p;
	p = &a[0];
	
//	int *ptr[3];
//	ptr = a[0];
//	ptr+1 = a[1];
//	ptr+2 = a[2];
//
	for (i=0;i<3;i++) {
		printf ("%d %p\n", *p,p);
	p++;	
	}
	return 0;
}



