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
	printf("%d\n",i);
	for (j=0;j<10;j++) {
		printf("%d\n",name[j]);
	}

	//printf("%d\n",name);
	//char name [7] = "Pradeep";
	//char name1 [8] = "Pradeep";
	//printf("without null:\t %s\n",name);
	//printf("with null:\t %s\n",name1);
	return 0;
}
