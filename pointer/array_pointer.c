#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[5] = {1,2,3,4,5};
	int *p;
	p = &a[0];

	int i = 0;
	for (i=0;i<5;i++) {
		printf ("Value is %d and address is %p\n", *p,p);
		p++ ;
	}
	return 0;
}

