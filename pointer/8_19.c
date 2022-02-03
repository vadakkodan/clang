//Write a program to copy one array into another array Order of elements of second array should be opposite to those of first array.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a[5], i=0;
	int b[5], j=5;
	printf ("Enter the 5 elements:\n");
	while (i<5){
		scanf("%d",&a[i]);
		i ++;
	}
	//for ( i=0; i<5; i++) {
	//	printf ("%d\t",a[i]);
	//}
	while (j=5) {
		for (i =0; i<5; i++) {
		b[j] = a[i];
		//printf ("%d %d", a[i],b[j]);
	}
	}
        for ( j=0; j<5; j++) {
		printf ("%d\t",b[j]);
	}
	return 0;
}

