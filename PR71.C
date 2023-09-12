#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
int a,b;
clrscr();
printf("Enter the two numbers: ");
scanf("%d%d",&a,&b);
printf("Before calling swap function==> a: %d\nb: %d\n",a,b);
swap(a,b);
getch();
}
void swap(int x,int y)
      {
      int temp;
      temp=x;
      x=y;
      y=temp;
      printf("After calling swap function==> a: %d\nb: %d\n",x,y);
      }

