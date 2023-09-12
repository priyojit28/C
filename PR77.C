#include<stdio.h>
#include<conio.h>
int x[10];
void merge(int low,int mid,int high)
{
int s1,s2,k,y[10];
s1=low;
s2=mid+1;
k=low;
while(s1<=mid &&  s2<=high)
     {
     if(x[s1]<=x[s2])
	y[k++]=x[s1++];
     else
	y[k++]=x[s2++];
     }
while(s1<=mid)
      y[k++]=x[s1++];
while(s2<=high)
      y[k++]=x[s2++];
for(k=low;k<=high;k++)
    x[k]=y[k];
}
void merge_sort(int low,int high)
	 {
	 int mid;
	     if(low<high)
		   {
		   mid=(low+high)/2;
		   merge_sort(low,mid);
		   merge_sort(mid+1,high);
		   merge(low,mid,high);
		   }
	 }
void main()
   {
     int n,k,l,y;
     clrscr();
     printf("Enter number of elements: ");
     scanf("%d",&n);
     printf("\n Enter %d elements: ",n);
     for(k=0;k<n;k++)
	 scanf("%d",x[k]);
     merge_sort(0,n-1);
     printf("\n The sorted list: ");
     for(k=0;k<n;k++)
	printf("%d",x[k]);
     getch();
   }


