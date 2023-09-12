#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int a,b;
clrscr();
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
printf("Before calling swap function==> a: %d\nb: %d\n",a,b);
swap(&a,&b);
printf("After calling swap function==> a: %d\nb: %d\n",a,b);
getch();
}
void swap(int *x,int *y)
      {
      int temp;
      temp=*x;  //Assign the value at address 'a' to temp
      *x=*y;   //Put 'y' into the value of a
      *y=temp; //Put temp into the value of b
      }
