//To find the largest number of the entered numbers
#include<stdio.h>
#include<stdlib.h>
int a[5] ;
int main(){
	int i,j = 0;
	printf("_____Enter 5 Numbers_____\n\n");
        for (i=0;i<5;i++) {
		j = i + 1;
		printf("Enter the Number %d:\t",j);
		scanf ("%d", &a[i]);
	}

	int large = a[0];
	for (i=0;i<5;i++) {
		if (a[i] > large) 
		{
			large = a[i];
		}
		else {
			large = large;
		}
	}
	printf("Largest number of the entered numbers is: %d \t \n",large);
	return 0;
}

