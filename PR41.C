#include<stdio.h>
#include<conio.h>
void main()
{
int s,h,m;
clrscr();
printf("Enter the time in hour==> \n");
scanf("%d",&h);
printf("Enter the time in minute==> ");
scanf("%d",&m);
printf("Enter the time in second==> ");
scanf("%d",&s);
m=(h*60)+m;
s=(m*60)+s;
printf("The time in second==> %d",s);
getch();
}
