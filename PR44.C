#include<stdio.h>
#include<conio.h>
void main()
{
int n,p,r,sum=0;
clrscr();
printf("Enter a number to get its reverse==> ");
scanf("%d",&n);
p=n;
while(p>0)
      {
      r=p%10;
      sum=(sum*10)+r;
      p=p/10;
      }
      printf("Reverse of %d number is==> %d",n,sum);
      getch();
}