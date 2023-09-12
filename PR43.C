#include<stdio.h>
#include<conio.h>
void main()
{
long int h,m,s;
clrscr();
printf("Enter the time in second==> ");
scanf("%ld",&s);
m=((s%3600)/60);
h=(s/3600);
s=(s%60);
printf("The time in hour is==> %ld\n",h);
printf("The time in minute is==> %ld\n",m);
printf("The time in second is==> %ld\n",s);
getch();
}