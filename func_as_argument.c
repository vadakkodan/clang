//Write a program to calculate the square and cube of an entered number. Use function as an argument.
#include<stdio.h>
#include<stdlib.h>

int square(int );
int cube(int );
int main(){
	int a;
	printf("Enter a Number :");
	scanf("%d",&a);
	//square (a);
	printf("Square is %d",square(a));
	printf("Cube is %d", cube(a));
	return 0;
}
int square(int x){
	int square = x * x;
	return square ;

}
int cube(int x){
	int cube = x * x * x;
	return cube;
	
}




