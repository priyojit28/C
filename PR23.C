#include<stdio.h>
#include<conio.h>
void main()
{
int i=5,n;
clrscr();
printf("Enter number of terms==>");
scanf("%d",&n);
while(i<=n)
     {
     printf("%d\n",i);
     i=i+5;
     }
getch();
}