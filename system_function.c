//Write a program to display the following files of current directory.
//(1) .exe files (2) .bat files (3) .obj files (4) .bak files, by using system dos command.
#include <stdio.h>
void main()
{
int c;
//clrscr();
printf("\n FILE LISTING MENU");
printf("\n 1] .EXE");
printf("\n 2] .BAT");
printf("\n 3] .obj");
printf("\n 4] .bak\n Enter your Choice -:");
scanf("%d",&c);
switch (c)
{
case 1:
system("dir.exe");
break;
case 2:
system("\ndir.c");
break;
case 3:
system("\ndir.obj");
break;
case 4:
system("\ndir.bak");
break;
default:
break;
}
//getche();
}
