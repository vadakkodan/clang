#include <stdio.h>
#include <string.h>

int main() {
	int a[10] = {0}, i = 0;
	printf ("Enter the elements of the array:\n");
	for (i=0; i<10; i++) {
		scanf ("%d",&a[i]);
	}
	printf ("Elements of the array are:\n");
	for (i=0; i<10; i++) {
		printf ("%d\t",a[i]);
	}
	printf ("\n");
	return 0;
}


