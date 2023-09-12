#include<stdio.h>
#include<conio.h>
void main()
{
int y;
clrscr();
printf("Enter A year==> ");
scanf("%d",&y);
if (y%4==0)
printf("This is a leap year");
else
printf("This is not a leap year");
getch();
}