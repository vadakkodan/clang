
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    char *n_endptr;
    char *n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);
    printf ("%c",*n_str);
    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }
	printf("%d",n);
    // Write Your Code Here
    if(n>=1 || n<=9){
	printf("%s\n",n_endptr);}
    else
    	printf ("Greater than 9");

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char *data = malloc(alloc_length);
    //printf("%p %ld %ld", data,sizeof(*data),alloc_length);
	
    while (true) {
        char* cursor = data + data_length;
        char line[alloc_length] = fgets(cursor, alloc_length - data_length, stdin);
	printf("line %s linelength: %ld\n",*line,sizeof(*line));
	//printf("cursor %c courserlength: %ld\n",*cursor,sizeof(*cursor));

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);
    //printf("%s", data);

    return data;
}
