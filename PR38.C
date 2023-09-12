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
      printf("Enter the value of of a==> ");
      scanf("%d",&a);
      printf("Enter the value of b==> ");
      scanf("%d",&b);
      a=a+b;
      b=a-b;
      a=a-b;
      printf("Value of a  after swapping==> %d\n",a);
      printf("Value of b afetr swapping==> %d",b);
      }

