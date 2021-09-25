#include <stdio.h>
void main()
{
long ch, min, hrs, ds, mon, yrs, se;
//clrscr();
printf("\n[l] MINUTES");
printf("\n[2] HOURS");
printf("\n[3] DAYS");
printf("\n[4] MONTHS");
printf("\n[5] SECONDS");
printf("\n[0] EXIT");
printf("\n Enter Your Choice:");
scanf("%ld", &ch);
if(ch>0 && ch<6)
{
printf("Enter Years:");
scanf("%ld",&yrs);
}
mon=yrs*12;
ds=mon*30;
ds=ds+yrs*5;
hrs=ds*24;
min=hrs*60;
se=min*60;
printf("%ld,%ld,%ld,%ld,%ld",mon,ds,hrs,min,se);
switch(ch)
{
case 1:
printf("\n Minutes : %ld",min);
break;
case 2:
printf("\n Hours : %ld",hrs);
break;
case 3:
printf("\n Days : %ld",ds);
break;
case 4:
printf("\n Months : %ld",mon);
break;
case 5:
printf("\n Seconds: %ld",se);
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
