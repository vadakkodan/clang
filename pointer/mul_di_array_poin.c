#include <stdio.h>
#include <stdlib.h>
int main() {
	int i = 0,j;
	int a[2][2] = { {1,2},{3,4} };
//	printf ("%d", a[1][1]); 	
        while (i<2) {
//		printf ("%d",i);
	for(j=0;j<2;j++) {
		printf("%d\t",a[i][j]);
	//	printf("%d",i);
	//	j++;
	}
	printf ("\n");
	i++;
	}
	return 0;
}
		
