#include <stdio.h>
#include <string.h>
int main()
{
	int n1=0, n2 = 0, sum = 0;
	int *nu1 ;
        int *nu2 ;
        int *summ ;
	nu1 = &n1;
	nu2 = &n2;
	summ = &sum;
        printf ("Enter 2 Numbers: ");
        scanf ("%d %d", &n1,&n2);
        printf("Numbers are = %d\t%d\n",*nu1,*nu2);
        printf("Addresses are = %p\t%p\n",nu1,nu2);
	*summ = *nu1 + *nu2 ;
        printf("Numbers are = %d\t%d\t%d\n",*nu1,*nu2,*summ);
        //printf("Addresses are = %p\t%p\n",nu1,nu2);

        
        return 0;
}
