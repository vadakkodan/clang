#include <stdio.h>
int main() {
	int a[3][3] = {{9,2,3},{4,5,6},{7,8,9}};
	int i;
	printf ("%p %d\n",*a+0,*(*a+0));
	
//	int *p;
//	p = a;
//	printf("%d %p",*p,p);
	
	
//	int i,j;
//	p = &a[0][0];
//	for (i=0;j=0;i<3;j<3;i++;j++){
//		printf("Element:%d Address:%p\n",*((p+i)+j),((p+i)+j));
//		}
	
	//for (i=0;i<3;i++) {
	//	for (j=0;j<3;j++) {
	//		printf("element: %d\t Address: %p\n ",(*(p+i)+j),((p+i)+j));
	//		printf("element: %d\t Address: %p\n ",a[i][j], &(a[i][j]));
	//	}
	//}
	return 0;
}
