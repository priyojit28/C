#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],key,n,k;
clrscr();
printf("How many elements?:  ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
      for(k=0;k<n;k++)
      scanf("%d",&x[k]);
      printf("Enter element to search: ");
      scanf("%d",&key);
	   for(k=0;k<n;k++)
	       {
	       if(x[k]==key)
		  {
		  printf("Element found at %d position: ",k);
		  break;
		  }
	       }
getch();
}
