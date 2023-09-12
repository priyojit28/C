#include<stdio.h>
#include<conio.h>
void main()
{
int i=15;
int *p,**pp; //'*' is used to represent pointer variable
clrscr();
p=&i;
pp=&p;
printf("The address of i: %d\n",&i);
printf("The address of i: %d\n",p);
printf("The address of i: %d\n",*pp);
printf("The address of p: %d\n",&p);
printf("The address of p: %d\n",pp);
printf("The address of pp: %d\n",&pp);
printf("The address of i: %d\n",i);
printf("The address of i: %d\n",*p);
printf("The address of i: %d\n",**pp);
printf("The address of p: %d\n",*pp);
getch();
}