#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5],b[5],c[5]={0,0,0,0,0};
clrscr();
printf("Enter 5 values for first array==>");
for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<5;i++)
    {
    scanf("%d",&b[i]);
    }
for(i=0;i<5;i++)
    {
    c[i]=a[i]+b[i];
    }
for(i=0;i<5;i++)
printf("%d\t",c[i]);
getch();
}