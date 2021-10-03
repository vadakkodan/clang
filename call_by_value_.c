#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
printf("Swap function %d,%d",a,b);
}


int main()
{
    int a = 10, b=20;
    printf("Before Swapping %d,%d", a,b);
    swap (a,b);
    printf("After Swapping %d,%d", a,b);
    return 0;
}

