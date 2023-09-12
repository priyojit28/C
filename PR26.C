#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int i=1,n,s=0;
clrscr();
printf("Enter number of terms==>");
scanf("%d",&n);
while(i<=n)
     {
     s=s+pow(i,3);
     i=i+1;
     }
printf("%d",s);
getch();
}