#include <stdio.h>
#include <string.h>
int main()
{

//int num1 = 0, num2 = 0, sum =0;
int *nu1 = 0 ;
int *nu2 = 0 ;
int *sum = 0;
//nu1 = &num1;
//nu2 = &num2;
printf("Enter two Number =");
scanf("%d %d",nu1,nu2);
printf("Numbers are = %d\t%d\t\n",*nu1,*nu2);
printf("Addresses are = %p\t%p\t%p\n",nu1,nu2,sum);
//*sum = *nu1 + *nu2;

printf("Numbers are = %d\t%d\t%d\n",*nu1,*nu2,*sum);
printf("Addresses are = %p\t%p\t%p\n",nu1,nu2,sum);
//printf("Ad=%d\n",num1);
//printf("Address of num=%p\n",&num);
//printf("Address of num1=%p\n",&num1);
//getche();
return 0;
}
