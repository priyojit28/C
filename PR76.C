#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],n,k,l,y,z;
clrscr();
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
      for(k=0;k<n;k++)
      scanf("%d",x[k]);
	   for(k=n-1;k>=0;k--)
	      {
	      z=0;
	      y=x[z];
		 for(l=0;l<=k;l++)
		    if(x[l]>y)
		      {
		      y=x[l];
		      z=l;
		      }
		    x[z]=x[k];
		    x[k]=y;
	      }
	   printf("\n Sorted list: ");
	   for(k=0;k<n;k++)
	      printf("%d",x[k]);
getch();
}
