#include <stdio.h>
#include <math.h>
int max_of_four(int w, int x,int y, int z);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int w, int x,int y, int z) {
	int great = 0,i;
	int a[4]= {w,x,y,z};
	for (i=0;i<4;i++) {
		if (a[i] > great) {
			great = a[i];
		}
		else {
			great = great;
		}
	}
	return great;
}
