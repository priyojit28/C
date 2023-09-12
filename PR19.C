#include<stdio.h>
#include<conio.h>
void main()
{
int pf,bs=10000;
float dh,da,hra,tax,gs,ns;
clrscr();
printf("Enter duty hours==> ");
scanf("%f",&dh);
     {
     if(dh==8)
	{
	pf=500;
	da=(bs*5)/100;
	hra=(bs*10)/100;
	tax=(bs*5)/100;
	gs=bs+da+hra;
	ns=gs-tax-pf;
	printf("Gross salary is==> %f",gs);
	printf("Net salary is==> %f",ns);
	}
else if ((dh>8)&&(dh<=10))
	{
	pf=1000;
	da=(bs*10)/100;
	hra=(bs*15)/100;
	tax=(bs*10)/100;
	gs=bs+da+hra;
	ns=gs-tax-pf;
	printf("Gross salary is==> %f",gs);
	printf("Net salary is==> %f",ns);
	}
else if((dh>10)&&(dh<=12))
	{
	pf=1500;
	da=(bs*15)/100;
	hra=(bs*10)/100;
	tax=(bs*15)/100;
	gs=bs+da+hra;
	ns=gs-tax-pf;
	printf ("Gross salary is==> %f",gs);
	printf("Net salary is==> %f",ns);
	}
else
	{
	printf("input invalid");
	}
    }
getch();
}

