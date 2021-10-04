#include<stdio.h>
#include<stdlib.h>

int a[5];// Declaring array globally
int main(){
	int i;
	for (i=0;i<5;i++){
	printf("%d\n",a[i]);// Want to know what value is storing in the array, expecting all zeros.
	}
	return 0;
}
// As it expected, attached the teext file
// For executing this 
//     gcc -o <output_name> <filename.c>
//     to View the output
//     ./<output_name>
	
