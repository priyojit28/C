#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],mul[3][3],r,c,i,j,k;
clrscr();
printf("Enter the number of rows: \n");
scanf("%d",&r);
printf("Enter the number of column: \n");
scanf("%d",&c);
printf("Enter the first matrix's element: \n");
for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
       {
       scanf("%d",&a[i][j]);
       }
   }
printf("Enter the second matrix's element: \n");
for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
       {
       scanf("%d",&b[i][j]);
       }
   }
printf("Multiplication of matrix: \n");
for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
       {
       mul[i][j]=0;
       for(k=0;k<c;k++)
	   {
	   mul[i][j]+=a[i][k]*b[k][j];
	   }
       }
   }
for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
	{
	printf("%d\t",mul[i][j]);
	}
    printf("\n");
    }
getch();
}
