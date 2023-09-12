#include<stdio.h>
#include<conio.h>
void main()
{
int i=200;
clrscr();
printf("Even numbers between 200 and 500 are==> ");
while(i<500)
     {
     if(i%2==0)
     printf("%d\t",i);
     i=i+1;
     }
getch();
}
