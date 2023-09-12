#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,r,p;
clrscr();
printf("Enter a number to check whether it is armstrong or not==> ");
scanf("%d",&n);
p=n;
while(n>0)
      {
      r=(n%10);
      s=s+(r*r*r);
      n=(n/10);
      }
if(s==p)
printf("The number is armstrong");
else
printf("The number is not armstrong");
getch();
}