//To find the area and circumference of a circle
#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
float r=0;
float a=0;
float c=0;

int main() {
	printf("Enter the radius of the circle:\t");
	scanf("%f",&r);
	a = PI * r * r;
	c = 2 * PI * r;
	printf("area: \t%.3f\n", a);
	printf("circumference: \t%.3f\n", c);
return 0;
}

	


