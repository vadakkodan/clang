/* passing address of structure variable */
#include <stdio.h>
#include <stdlib.h>
struct book
{
char name[35];
char author[35];
int pages;
};

void show(struct book *b2)
{
//clrscr();
printf("\n %s by %s of %d pages",b2->name,b2->author,b2->pages);
}
void main()
{
struct book b1= {"JAVA COMPLETE REFERENCE","P.NAUGHTON",886};
show(&b1);
//getche();
}


