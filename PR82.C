#include<stdio.h>
#include<conio.h>
void main()
{
int rec(int);
     {
     int fact,n;
     clrscr();
     printf("ENTER A NUMBER: ");
     scanf("%d",&n);
     fact=rec(n);
     printf("FACTORIAL IS: %d",fact);
     getch();
     }
}
int rec(int p)
     {
     int i,fact=1;
     for(i=1;i<=p;i++)
	{
	fact=fact*i;
	}
     return fact;
     }

