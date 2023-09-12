#include<stdio.h>
#include<conio.h>
void main()
{
int factorial(int);
clrscr();
int n,fact;
printf("Enter a number to check its factorial==>");
scanf("%d",&n);
fact=factorial(n);
printf("Factorial of the number is==> %d",fact);
getch();
}
int factorial(int f)
	 {
	 int i,fact=1;
	 for(i=1;i<=f;i++)
		 {
		 fact=fact*i;
		 }
	 return fact;
	 }
