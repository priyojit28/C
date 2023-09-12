#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,s=0;
clrscr();
printf("Enter a number to get its sum of the digits==> ");
scanf("%d",&n);
while(n>0)
     {
     r=(n%10);
     s=s+r;
     n=n/10;
     }
     printf("Sum of the digits is==> %d",s);

getch();
}