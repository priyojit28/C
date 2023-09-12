#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the value of two  numbers==>");
scanf("%d%d",&a,&b);
if(a>b)
printf("The value of a is greater than the value of b");
else
printf("The value of b is greater than the value of a");
getch();
}