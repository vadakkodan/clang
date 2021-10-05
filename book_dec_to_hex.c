    #include <process.h>
void main()
{
int x,y=30,z;
clrscr();
printf("\nEnter a number:");
scanf("%d",&x);
printf("\n Conversion of Decimal to Hexadecimal Number \n");
for(;;)
{
if(x==0)
exit(1);
z=x%16;
x=x/16;
gotoxy(y--,5);
switch(z)
{
case 10:
printf("A");
break;
case 11:
printf("%c",'B');
break;
case 12:
printf("%c","C");
break;
case 13:
printf("D");
break;
case 14:
printf("E");
break;
case 15:
printf("F");
break;
default:
printf("%d",z);
}
}
}
