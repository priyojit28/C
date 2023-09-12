#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the value of two numbers==>");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The value of a after swapping is==>%d\n",a);
printf("The value of b after swapping is==>%d",b);
getch();
}