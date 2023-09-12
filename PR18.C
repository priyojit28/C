#include<stdio.h>
#include<conio.h>
void main()
{
int ch,i,n,fact=1,k=0;
clrscr();
printf("Enter a number==> ");
scanf("%d",&n);
printf("Press 1 to check odd or even\n");
printf("Press 2 to check prime or not\n");
printf("Press 3 to get factorial\n");
printf("Enter user's choice==>\n");
scanf("%d",&ch);
switch(ch)
 {
   {
   case 1:

       {
       if(n%2==0)
       printf("The number is even");
       else
       printf("The number is odd");
       }

   break;
   }
     {
     case 2:

       {
       for(i=1;i<=n;i++)
	  {
	  if(n%i==0)
	  k=k+1;
	  }
       if(k==2)
       printf("The number is prime");
       else
       printf("The number is not prime");
       }

     break;
     }
      {
       case 3:

	{
	for(i=1;i<=n;i++)
	   {
	   fact=fact*i;
	   }
	printf("The factorial of the humber is==> %d",fact);
	}

       break;
       }

       default:
	      {
	      printf("invalid input");
	      }
   }
getch();
}
