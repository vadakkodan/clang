#include<stdio.h>
#include<stdlib.h>
int main() {
	struct book {
		char book_name[20];
		char author[20];
		int price;
	};
	struct book b1;
	printf ("Enter the Book Details:\n");
	scanf ("%s %s %d",b1.book_name,b1.author,&b1.price);
	printf("%s %s %d\n", b1.book_name,b1.author,b1.price);
	printf("Size of the user defined datatype structure is: %ld\n", sizeof(b1));
	
	return 0;
}

