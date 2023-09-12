#include<stdio.h>
#include<conio.h>
long gcd(long,long);
void main()
{
long x,y,hcf,lcm;
clrscr();
printf("ENTER TWO NUMBERS: ");
scanf("%ld%ld",&x,&y);
hcf=gcd(x,y);
lcm=(x*y)/hcf;
printf("HCF OF %ld AND %ld= %ld\n",x,y,hcf);
printf("LCM OF %ld AND %ld= %ld\n",x,y,lcm);
getch();
}
long gcd(long a,long b)
     {
       if(b==0)
	  {
	    return a;
	  }
       else
	  {
	    return gcd(b,a%b);
	  }
     }