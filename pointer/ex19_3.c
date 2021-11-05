//Write a program to show a pointer of any type that occupies the same space.
#include <stdio.h>
#include <string.h>
int main () {
	int *a;
	float *b;
	char *c;
	printf ("size of all: %ld\n %ld\n %ld\n", sizeof(a),sizeof(b),sizeof(c));
	return 0;
}
