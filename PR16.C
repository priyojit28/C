#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter a number to get its factors==> ");
scanf("%d",&n);
printf("The factors of %d are==> ",n);
for(i=1;i<=n;i++)
   {
   if(n%i==0)
   printf("%d\n",i);
   }
getch();
}