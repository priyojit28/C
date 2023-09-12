#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int i=1,s=0,n;
clrscr();
printf("Enter number of terms==>");
scanf("%ld",&n);
while(i<=n)
     {
     s=s+pow(i,i+10);
     i=i+1;
     }
printf("%ld",s);
getch();
}
