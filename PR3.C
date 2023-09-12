#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float a,p;
clrscr();
printf("Enter the radius of the  circle==>");
scanf("%d",&r);
a=3.14*r*r;
p=2*3.14*r;
printf("The area of the circle is==>%f\n",a);
printf("The perimeter of the circle is==>%f",p);
getch();
}
