#include<stdio.h>
#include<conio.h>
void main()
{
int first=0,second=1,i=1,r,n;
clrscr();
printf("Enter number of terms==> ");
scanf("%d",&n);
printf("%d",first);
printf("%d",second);
while(i<=n-2)
       {
       r=first+second;
       printf("%d",r);
       first=second;
       second=r;
       i=i+1;
       }
getch();
}