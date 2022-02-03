#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,*ptr;
	int a[n];
	printf ("How many elements in the array:");
	scanf ("%d", &n);
	ptr = (int *)malloc(n*sizeof(int));
	printf("Enter the elements of the array: ");
	for (i=0;i<n;i++) {
		scanf("%d",ptr+i);
	}
	for (i=0;i<n;i++) {
		printf("%p\t %d\n",ptr+i,*(ptr+i));
		
	}
	printf("\n");
	size_t s = sizeof(a);
	printf ("%d byte\n",s);
	printf ("%d byte\n",sizeof(n));
	return 0;
}


