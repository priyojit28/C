#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
{
int n,f=0,s=1,c,i;
clrscr();
printf("ENTER NUMBER OF TERMS: ");
scanf("%d",&n);
if(n==1)
   {
     printf("%d",f);
   }
else if(n==2)
   {
     printf("%d%d",f,s);
   }
else
   {
     printf("%d %d",f,s);
	   for(i=3;i<=n;i++)
	       {
		 printf(" %d",fibo(i));
	       }
   }
getch();
}
int fibo(int n)
    {
      if(n==1)
	      return 0;
      else if(n==2)
	      return 1;
      return fibo(n-2)+fibo(n-1);
    }