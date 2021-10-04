#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
        int a[5];// Declaring array locally
	for (i=0;i<5;i++){
	scanf("%ls\n",&a[i]);// Want to know what value is storing in the array, expecting junk value.
	//printf("%d\n",a[i]);// Want to know what value is storing in the array, expecting junk value.
	}
	return 0;
}
//+++++++++OUTPUT+++++++++
//0
//0
//4198464
//0
//-778474048
// Used Clang compiler for this, when tested with gcc compiler the result were different.
// As it is expected, received some junk values attached the text file.
// For executing this 
//     gcc -o <output_name> <filename.c>
//     to View the output
//     ./<output_name>
	
