//Write a program to merge two arrays into a third one. Display the contents of all the three arrays.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=0,j = 0,k = 0;
	int m=0 ,n = 0,o = 0;
	int p = 0;
	int a[5] = {0};
	int b[10] = {0};
	int c[30] = {0};

	// Prepare First array 
	printf("First array(a[n]) size: \t\n");
	scanf ("%d",&m);
	printf("Enter first array elements: \t\n");
        for (i=0;i<m;i++) {
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

	// Prepare Second array 
	printf("Second array size: \t\n");
	scanf ("%d",&n);
	printf("Enter second array elements: \t\n");
        for (i=0;i<n;i++) {
		j = i + 1;
		printf("Enter the Element %d:\t",j);
		scanf ("%d", &b[i]);
	}
	//Print Second ARRAY
	printf ("--------------");
	printf ("\nSecond Array is :");
	for (i=0;i<n;i++) {
		printf("%d " "",b[i]);
	}
	printf ("\n \n ");

	//Merging starts here
	for (i=0;i<=;)




	
	

	
	return 0;
}

