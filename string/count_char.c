//Find the frequency of a character in a string

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	
	int strlength =0; 

	char character; 			// The character which frequency to find
	int i =0;
	int count =0; 
	char sample[30]; //The string
	printf("enter the string: \t");
	scanf("%[^\n]", sample); 		// %s will not accept space character, the work around fond is this %[^\n].
	printf("entered string is: \t%s", sample);
	printf ("\nWhich text character to find:\t");
	scanf(" %c",&character);		// Not the space before %c. ie., " %c", because the previously entered enter is in buffer so it will not ask for new character, so add a space before that.
	//printf("%c\n",character);
	//printf("pointer%c",*pointer);
	strlength = strlen(sample);
	printf ("String_length:%d\n", strlength);
	
	for (i =0; i<=strlength ; i++) {
		printf ("%c\n", sample[i]);
		
		if (sample[i] == character) {
			count ++ ;
			//printf ("here\n");
		}
		else {
			count = count;
			//printf ("Not here\n");
		}
		//printf ("%d", count);
	}
	printf ("The frequency of '%c' in the entered string is: %d\n", character,count);

	
	return 0;
}

