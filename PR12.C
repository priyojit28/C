#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,ch;
clrscr();
printf("Enter two numbers==> ");
scanf("%d%d",&a,&b);
printf("Enter 1 for addition\n");
printf("Enter 2 for substraction\n");
printf("Enter 3 for multiplication\n");
printf("Enter 4 for division\n");
scanf("%d",&ch);
switch(ch)
     {
     case 1:
       {
       c=a+b;
       printf("Sum Of the numbers is==> %d\n",c);
       break;
       }
     case 2:
       {
       d=a-b;
       printf("Substraction of the numbers is==> %d\n",d);
       break;
       }
     case 3:
       {
       e=a*b;
       printf("Multiplication of the numbers is==> %d\n",e);
       break;
       }
     case 4:
       {
       f=a/b;
       printf("Division of the numbers is==> %d\n",f);
       break;
       }
default:
       {
       printf("Wrong choice");
       }
     }
getch();
}