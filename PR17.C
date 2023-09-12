#include<stdio.h>
#include<conio.h>
void main()
{
int n,k=0,i;
clrscr();
printf("Enter a number to check whether it is prime or not==> ");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    if(n%i==0)
    k=k+1;
    }
if(k==2)
printf("The number is prime");
else
printf("The number is not prime");
getch();
}