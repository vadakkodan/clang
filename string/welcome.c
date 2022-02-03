//Write a program to read a name through the keyboard. Determine the length of the string and find its equivalent ASCII codes.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int i=0,j=0;
	printf("Enter Your Name:\n");
	char name [10];
	//gets(name);
	//for(i=0;i<10;i++) {
		scanf("%s",name);
		i = strlen(name);
	//}
	printf("Hi %s, Welcome to advanced C Programming\n",name);
	printf("String Length:\t%d\n",i);
	for (j=0;j<=i;j++) {
		printf("ASCII value of the letters in your name is:%d\n",name[j]);
	}
	return 0;
}

