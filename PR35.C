#include<stdio.h>
#include<conio.h>
void main()
{
void check(int);
clrscr();
int n;
printf("Enter a number to check whether it is odd or even==> ");
scanf("%d",&n);
check(n);
getch();
}
void check(int x)
    {
    if(x%2==0)
    printf("The number is even");
    else
    printf("The nukmber is odd");
    }