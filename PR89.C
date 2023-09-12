#include<stdio.h>
#include<conio.h>
void main()
{
long num,b,d=0,base=1,rem;
clrscr();
printf("ENTER A BINARY NUMBER: ");
scanf("%ld",&num);
b=num;
while(num>0)
     {
       rem=num%10;
       d=d+rem*base;
       num=num/10;
       base=base*2;
     }
printf("EQUIVALENT DECIMAL VALUE= %ld\n",d);
getch();
}