#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a number to check whether it is odd or even==>");
scanf("%d",&n);
if (n%2==0)
printf("The number is even");
else
printf("The number is odd");
getch();
}