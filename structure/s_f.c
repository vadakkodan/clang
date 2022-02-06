/*Structures and relationship with fucntion. Structure is nothing new. It is just like an another data type*/
#include<stdio.h>
#include<stdlib.h>

struct book {
		char book_name[20];
		char author[20];
		int price;
	};

int printing(struct book *copybook) {
	printf ("%s is written by %s priced %d\n",copybook->book_name,copybook->author,copybook->price);
	return (0);
}

int main() {
	struct book b1;
	struct book *ptr;
	ptr = &b1;

	printf ("Enter the Book Details:\n");
	scanf ("%s %s %d",b1.book_name,b1.author,&b1.price);
	printing (&b1);
	
	return 0;
}

