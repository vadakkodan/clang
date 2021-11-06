//Write a program to add two numbers through variables and their pointers.
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a =0, b=0, sum =0;
	int *point_a,*point_b, *point_sum;
	point_a = &a;
	point_b = &b;
	point_sum = &sum;
	scanf ("%d %d", &a,&b);
	//printf ("%p",point_a);
	*point_sum = *point_a +*point_b ;
	printf ("%d\n",sum);
	printf ("sum in the pointer:%d\n",*point_sum);
	
	return 0;
}


