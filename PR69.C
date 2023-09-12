#include<stdio.h>
#include<conio.h>
void main()
{
int i,x,a[10];
int *p;
clrscr();
printf("Enter how many numbers do you want to enter in the array: ");
scanf("%d",&x);
printf("Enter the elements of the array: ");
for(i=0;i<x;i++)
scanf("%d",&a[i]);
p=&a[0];
printf("Accessing a[i]\n");
for(i=0;i<x;i++)
printf("%d\n",a[i]);
printf("Accessing *(a+i)\n");
for(i=0;i<x;i++)
printf("%d\n",*(a+i));
printf("Accessing *(p+i)\n");
for(i=0;i<x;i++)
printf("%d\n",*(p+i));
printf("Accessing *p++\n");
for(i=0;i<x;i++)
printf("%d\n",*p++);
getch();
}

