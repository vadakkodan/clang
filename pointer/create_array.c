#include <stdio.h>
int main() {
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int *p;
	p = &a[0][0];
	printf("element: %d\t Address: %p\n ",(*(p+2)+2),((p+2)+2));
	return 0;
}
