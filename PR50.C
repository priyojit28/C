#include<stdio.h>
#include<math.h>
#include<conio.h>
int get_factorial(int number);
void main()
{
int num,i,temp,sum=0;
clrscr();
printf("Enter a number to check whether it is Krishnamurthy or not==>  ");
scanf("%d",&num);
temp=num;
while(num>0)
     {
     i=num%10;
     sum=sum+get_factorial(i);
     num=num/10;
     }
     if(sum==temp)
	{
	printf("%d number is krishnamurthy\n",temp);
	}
	else
	{
	printf("%d is not a krishnamurthy number\n",temp);
	}
	getch();
}

       int get_factorial(int number)
	      {
	      int factorial=1,i;
	      for(i=1;i<=number;i++)
		  {
		  factorial=factorial*i;
		  }
		  return factorial;
	      }
