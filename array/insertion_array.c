//Consider total array size is 30; Insert an element in the desired position. Code has known bugs like consider adding in the 0th position, after the size of the position etc. that can be rectified
#include<stdio.h>
#include<stdlib.h>
int a[30] ;
int main(){
	int i=0,j,k = 0;
	int m,n,o = 0;

	printf("Array size ?\n\n");
	scanf ("%d",&n);
	int a[n];
        for (i=0;i<n;i++) {
		j = i + 1;
		printf("Enter the Elements %d:\t",j);
		scanf ("%d", &a[i]);
	}
	printf ("--------------");
	printf ("\nArray is :");
	for (i=0;i<n;i++) {
		printf("%d " "",a[i]);
	}
	printf ("\n \n ");
	printf ("Which place insertion needed: ?\t");
	scanf ("%d",&m);
	m = m - 1;
	printf ("What value needed to be inserted: ?\t");
	scanf ("%d",&o);

	for (i=n;i>=m;i--) {
		a[i+1] = a[i];
		//printf("%d " "",a[i]);
	}
	a[m] = o;
        printf ("New array is :");
	for (i=0;i<n+1;i++) {
		printf("%d " "",a[i]);
	}
	printf ("\n");

	return 0;
}

