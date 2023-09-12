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
     int fact;
     if(p==1)
	  return 1;
     else
	  fact=p*rec(p-1);
     return fact;
     }

