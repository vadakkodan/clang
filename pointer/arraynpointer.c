#include <stdio.h>
int main() {
	int a=5;
//	int a[3]= {1,2,3},i;
	int *p;
	p = &a;
	printf ("%p %d",p,*p);

//	int *ptr[3];
//	ptr = a[0];
//	ptr+1 = a[1];
//	ptr+2 = a[2];
//
//	for (i=0;i<3;i++) {
//		printf ("%d %p", *ptr[i],ptr); }
	return 0;
}



