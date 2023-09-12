#include<stdio.h>
#include<conio.h>
void main()
{
long num,b=0,d,base=1,rem;
clrscr();
printf("ENTER A DECIMAL NUMBER: ");
scanf("%ld",&num);
d=num;
while(num>0)
     {
       rem=num%2;
       b=b+rem*base;
       base=base*10;
       num=num/2;
     }
printf("EQUIVALENT BINARY VALUE= %ld\n",b);
getch();
}