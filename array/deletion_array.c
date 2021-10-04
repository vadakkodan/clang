//Consider total array size is 30; Insert an element in the desired position. Code has known bugs like consider adding in the 0th position, after the size of the position etc. that can be rectified
#include<stdio.h>
#include<stdlib.h>
int a[30] ;
int main(){
	int i=0,j,k = 0;
	int m,n,o = 0;

	printf("Array size ?\n\n");
	scanf ("%d",&n);
	//int a[n];
        for (i=0;i<n;i++) {
		j = i + 1;
		printf("Enter the Element %d:\t",j);
		scanf ("%d", &a[i]);
	}
	printf ("--------------");
	printf ("\nArray is :");
	for (i=0;i<n;i++) {
		printf("%d " "",a[i]);
	}
	printf ("\n \n ");
	printf ("Element position to be deleted: ?\t");
	scanf ("%d",&m);
	m = m - 1;
	//printf ("What value needed to be deleted: ?\t");
	//scanf ("%d",&o);

	for (i=m;i<=n;i++) {
		a[i] = a[i+1];
		//printf("%d " "",a[i]);
	}
	//a[m] = o;
        printf ("New array is :");
	for (i=0;i<n;i++) {
		printf("%d " "",a[i]);
	}
	printf ("\n");

	return 0;
}

