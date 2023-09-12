#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int,int);
int a,b;
clrscr();
printf("Enter two numbers: \n");
scanf("%d",&a);
scanf("%d",&b);
printf("First number before swapping:%d\n",a);
printf("Second number before swapping:%d\n",b);
swap(a,b);
getch();
}
void swap(int x,int y)
    {
    x=x+y;
    y=x-y;
    x=x-y;
    printf("First number after swapping:%d\n",x);
    printf("Second number after swapping:%d",y);
    }
