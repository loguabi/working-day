#include<stdio.h>
#include<conio.h>
void main()
{
char ch[50];
clrscr();
printf("Enter the day:");
scanf("%d",&ch);
if(((strcmp(ch,"sunday")==0||(ch,"saterday")==0)))
{
printf("Holiyday\n");
printf("False");
}
else
{
printf("Working day\n");
printf("True");
}
getch();
}
