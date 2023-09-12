#include<stdio.h>
#include<conio.h>
void main()
{
int a,p,s;
clrscr();
printf("Enter the value of one side of the square==>");
scanf("%d",&s);
a=s*s;
p=4*s;
printf("The area of the square is==>%d\n",a);
printf("The perimeter of the square is==>%d",p);
getch();
}