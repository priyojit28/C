#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the values of three numbers==>");
scanf("%d%d%d",&a,&b,&c);
if ((a>b)&&(a>c))
     {
     printf("The value of first number is maximum");
     }
else if ((b>c)&&(b>a))
     {
     printf("The value of second number is maximum");
     }
else
printf("The value of third number is maximum");
getch();
}