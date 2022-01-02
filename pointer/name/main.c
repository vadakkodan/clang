#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[10];
    int i;
    printf("Enter Your Name\n");
    for(i=0; i < 10; i++){
    scanf("%c",&c[i]);
    }
    printf("Welcome to C Programming ");
    for(i=0;i<10;i++) {
    printf("%c",c[i]);
    }

    return 0;
}
