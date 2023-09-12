#include<stdio.h>
#include<conio.h>
void main ()
{
int a,b,c;
clrscr();
printf("Enter the value of two numbers==>");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The value of 1st number after swapping==>%d\n",a);
printf("The value of 2nd number after swapping==>%d",b);
getch();
}
