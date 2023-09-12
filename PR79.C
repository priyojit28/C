#include<stdio.h>
#include<conio.h>
void main()
{
int cube(int);
     {
     int c,n;
     clrscr();
     printf("ENTER A NUMBER: ");
     scanf("%d",&n);
     c=cube(n);
     printf("CUBE OF %d IS: %d",n,c);
     getch();
     }
}
int cube(int p)
     {
     int c;
     c=p*p*p;
     return c;
     }

