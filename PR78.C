#include<stdio.h>
#include<conio.h>
void main()
{
void cube(int);
     {
     int n;
     clrscr();
     printf("ENTER A NUMBER: ");
     scanf("%d",&n);
     cube(n);
     getch();
     }
}
void cube(int p)
     {
     int c;
     c=p*p*p;
     printf("CUBE OF %d is: %d",p,c);
     }

