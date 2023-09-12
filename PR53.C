#include<stdio.h>
#include<conio.h>
void  main()
{
int arr[10],sum=0,i;
clrscr();
printf("Enter 10 numbers to get the sum==>");
for(i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }
for(i=0;i<10;i++)
   {
   sum=sum+arr[i];
   }
printf("\n Sum of the given numbers is==> %d",sum);
getch();
}