#include<stdio.h>
void main()
{
int a,b,c,ch;
//clrscr();
printf("\t ==========");
printf("\n\t MENU");
printf("\n\t ==========");
printf("\n\t[1] ADDITION");
printf("\n\t[2] SUBTRACTION");
printf("\n\t[3] MULTIPLICATION");
printf("\n\t[4] DIVISION");
printf("\n\t[5] REMAINDER");
printf("\n\t[6] LARGER OUT OF TWO");
printf("\n\t[0] EXIT");
printf("\n\t===========");
printf("\n\n\t ENTER YOUR CHOICE:");
scanf("%d", &ch);
if(ch<=6 & ch>0)
{
printf("Enter Two Numbers :");
scanf("%d %d",&a,&b);
}
switch(ch)
{
case 1:
c=a+b;
printf("\n Addition : %d",c);
break;
case 2:
c=a-b;
printf("\n Subtraction : %d",c);
break;
case 3:
c=a*b;
printf("\n Multiplication : %d",c);
break;
case 4 :
c=a/b;
printf("\n Division : %d",c);
break;
case 5:
c=a%b;
printf("\n Remainder: %d",c);
break;
case 6:
if(a>b)
printf("\n\t%d (a)is larger than %d (b).",a,b);
else
if(b>a)
printf("\n\t %d (b)is larger than %d (a).",b,a);
else
printf("\n\t %d (a)&%d (b) are same.",a,b);
break;
case 0:
printf("\n Terminated by choice");
//exit();
break;
default:
printf("\n Invalid Choice");
}
//getch();
}
