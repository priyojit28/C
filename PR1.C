#include<stdio.h>
#include<conio.h>
void main()
{
int a,p,l,w;
clrscr();
printf("Enter the value of length and breadth==>");
scanf("%d%d",&l,&w);
a=l*w;
p=2*(l+w);
printf("The area of the rectangle is==>%d\n",a);
printf("The perimeter of the rectangle is==>%d",p);
getch();
}