#include<stdio.h>
#include<conio.h>
void main()
{
int x=10,y=20;
int *p,*q;   //POINTER DECLARATION
clrscr();
p=&x;
q=&y;
printf("%d\n",p);
printf("%d\n",*p);
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",*q);
printf("%d\n",q);
getch();
}