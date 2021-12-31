//Write a program to show the effect of an increment on pointers variables. Display the memory locations of integer, character, and floating point numbers before and after increment of pointers.
//
#include <stdio.h>
#include <string.h>

int main() {

	int a = 0, *ap;
	char c, *ch;
	float f = 0.0, *fp;
	ap = &a;
	ch = &c;
	fp = &f;
	printf ("address of integer, char,float: %p\t%p\t%p\n", ap,ch,fp);
	return 0;
}

