#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,temp,n,r;
clrscr();
printf("Enter a number to check whether it is palindrome or not==> ");
scanf("%d",&n);
temp=n;
while(n>0)
     {
     r=n%10;
     sum=(sum*10)+r;
     n=n/10;
     }
if (temp==sum)
printf("The number is palindrome");
else
printf("The number is not palindrome");
getch();
}
