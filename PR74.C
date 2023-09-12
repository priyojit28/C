#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],n,k,l,y;
clrscr();
printf("How many elements are there?: ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
      for(k=0;k<n;k++)
      scanf("%d",&x[k]);
	   for(k=0;k<n-1;k++)
	      {
	      for(l=0;l<n-k-1;l++)
		 {
		 if(x[l]>x[l+1])
		   {
		   y=x[l];
		   x[l]=x[l+1];
		   x[l+1]=y;
		   }
		 }
	      }
       printf("\n Sorted list: ");
       for(k=0;k<n;k++)
       printf("%d ",x[k]);
getch();
}

