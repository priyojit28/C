#include<stdio.h>
#include<conio.h>
void main()
{
void check(int);
clrscr();
int n;
printf("Enter a number to check whether it is prime or not==> ");
scanf("%d",&n);
check(n);
getch();
}
void check(int num)
      {
      int i,p=0;
      for(i=1;i<=num;i++)
	  {
	  if(num%i==0)
	       {
	       p++;
	       }
	  }
	  if(p==2)
	  printf("The number is prime");
	  else
	  printf("The number is not prime");
      }