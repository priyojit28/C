#include<stdio.h>
#include<conio.h>
void main()
{
void swap(void);
clrscr();
swap();
getch();
}
void swap(void)
     {
     int a,b;
     printf("First number before swapping: \n");
     scanf("%d",&a);
     printf("Second number before swappping: \n");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("First number after swapping:%d\n",a);
     printf("Second number after swapping:%d",b);
     }