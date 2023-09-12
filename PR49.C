#include<stdio.h>
#include<conio.h>
void main()
{
void even(int);
void check(int);
int n;
clrscr();
printf("Enter a number to check whether it is odd or even,prime or not==> ");
scanf("%d",&n);
even(n);
check(n);
getch();
}
void even(int n)
      {
      if(n%2==0)
      printf("The number is even\n");
      else
      printf("The number is odd\n");
      }
void check(int p)
      {
      int j,q=0;
      for(j=2;j<=p;j++)
	    {
	    if(p%j==0)
	    q++;
	    }
      if(q==2)
      printf("The number is not prime\n");
      else
      printf("The number is prime\n");
}
