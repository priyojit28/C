#include<stdio.h>
#include<conio.h>
void main()
{
int arr[500],i,n,min,max;
clrscr();
printf("Enter total size of the array upto 500==> ");
scanf("%d",&n);
printf("Enter %d numbers to find maximum and minimum==> ",n);
for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   min=max=arr[0];
   for(i=1;i<n;i++)
       {
       if(min>arr[i])
	     {
	     min=arr[i];
	     }
       if(max<arr[i])
	     {
	     max=arr[i];
	     }
	}

       printf("Minimum of array is %d\n",min);
       printf("Maximum of array is %d\n",max);
getch();
}