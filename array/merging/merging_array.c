//Write a program to merge two arrays into a third one. Display the contents of all the three arrays.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=0,j = 0,k = 0;
	int m=0 ,n = 0,o = 0;
	int a[5] = {0};
	int b[10] = {0};
	int c[p] = {0};

	//printf("Third and Biggest array(c[n]) size:\t\n");
	//scanf ("%d",&m);
	// Prepare First array 
	printf("First array(a[n]) size: \t\n");
	scanf ("%d",&n);
	printf("Enter first array elements: \t\n");
        for (i=0;i<n;i++) {
		j = i + 1;
		printf("Enter the Element %d:\t",j);
		scanf ("%d", &a[i]);
	}
	//Print first ARRAY
	printf ("--------------");
	printf ("\nFirst Array is :");
	for (i=0;i<n;i++) {
		printf("%d " "",a[i]);
	}
	printf ("\n \n ");

	// Prepare Second array b[o]
	printf("Second array size: \t\n");
	scanf ("%d",&o);
	printf("Enter second array elements: \t\n");
        for (i=0;i<o;i++) {
		j = i + 1;
		printf("Enter the Element %d:\t",j);
		scanf ("%d", &b[i]);
	}
	//Print b[o] ARRAY
	printf ("--------------");
	printf ("\nb[o] Array is :");
	for (i=0;i<o;i++) {
		printf("%d " "",b[i]);
	}
	printf ("\n \n ");
	int p = n+o;
	for (i=p; i==0; i--) {
		for (j=o; j==0; j--) {
			c[i] = b[j];
		}
		//for (k = n; k==0; k--) {
		//	c[i] = a[k];
		//}
	}

	//Prepare c[m]
	
	//for (i=n;i==0;i--) {
	//	c[i] = a[i];
	//}
	printf ("c[m] is :\t");
	
	for (i=0;i<p;i++) {
		printf("%d " "",c[i]);
	}
	

	//printf ("Element position to be deleted: ?\t");
	//scanf ("%d",&m);
	//m = m - 1;
	////printf ("What value needed to be deleted: ?\t");
	////scanf ("%d",&o);

	//for (i=m;i<n;i++) {
	//	a[i] = a[i+1];
	//	printf("%d " "",a[i]);
	//}
	////a[m] = o;
        //printf ("New array is :");
	//for (i=0;i<n;i++) {
	//	printf("%d " "",a[i]);
	//}
	//printf ("\n");

	return 0;
}

