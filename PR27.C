#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int i=1,s=0,n;
clrscr();
printf("Enter number of terms==>");
scanf("%d",&n);
while(i<=n)
      {
      s=s+pow(i,i-1);
      i=i+1;
      }
printf("%d",s);
getch();
}