#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],key,n,k,lo,hi,mid;
clrscr();
printf("How many elements?:  ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
      for(k=0;k<n;k++)
      scanf("%d",&x[k]);
      printf("Enter element to search: ");
      scanf("%d",&key);
	   lo=0;
	   hi=n-1;
	   mid=(lo+hi)/2;
	       while(lo<=hi)
		    {
		    if(x[mid]==key)
		       {
		       k=mid;
		       printf("Element found at %d position",mid);
		       break;
		       }
		    else if(x[mid]>key)
		       {
		       hi=mid-1;
		       mid=(lo=hi)/2;
		       }
		    else
		       {
		       lo=mid+1;
		       mid=(lo+hi)/2;
		       }
		    }
getch();
}

