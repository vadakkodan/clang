//Playing with pointers. How pointer going to behave on structures.
#include<stdio.h>
#include<stdlib.h>
int main() {
	struct book {
		char book_name[20];
		char author[20];
		int price;
	};
	struct book *ptr;
	struct book b1;
	ptr = &b1;
	printf("%p\n",ptr);
	printf ("Enter the Book Details:\n");
	scanf ("%s %s %d",ptr->book_name,ptr->author,&ptr->price);
	printf("%s %s %d\n", ptr->book_name,ptr->author,ptr->price);
	printf("Size of the user defined datatype structure is: %ld\n", sizeof(b1));
	
	return 0;
}

