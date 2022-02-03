#include <stdio.h>
#include <stdlib.h>
void main()
{
	int k,*p,j=0; 
  	puts("\n How many Number :");
  	scanf("%d",&k);
  	p=(int*)calloc(k*sizeof(int),2);
	while(j!=k){
		printf("Number %d=",j+1);
		scanf("%d",p+j);
		j++;
	}
	j=0;
	printf("\n The numbers are : ");
	while (j!=k){
		printf("%d\t%p\n",*(p+j),p+j);
		j++;
	}
}
