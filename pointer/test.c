#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100
int main() 
{
    char ch;
    char s[MAX_LEN];
    char vchk[10];
    char sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("\n");
   //scanf("%s",&s);
    //scanf("%[^\n]",ch);
   // scanf("%[^\n]",vchk);
    scanf("%20[^\n]*c",sen);
    printf("%c\n",ch);
   // printf("%s\n",s);
    printf("%s\n",sen);    
    //printf("%s\n",vchk);    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
