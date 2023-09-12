#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=10;
clrscr();
printf("ENTER NUMBER OF TERMS==>");
scanf("%d",&n);
while(i<=n)
      {
      printf("%d\n",i);
      i=i+10;
      }
getch();
}