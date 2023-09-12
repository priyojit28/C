#include<stdio.h>
#include<conio.h>
void main()
{
int i,y;
int a[3][3],b[3][3];
int c[3][3]={0,0,0,0,0,0,0,0,0};
clrscr();
printf("Enter the elements of the matrix A==> \n");
for(i=0;i<3;i++)
    {
    for(y=0;y<3;y++)
    scanf("%d",&a[i][y]);
    }
printf("Enter the elements of matrix b==> \n");
for(i=0;i<3;i++)
    {
    for(y=0;y<3;y++)
    scanf("%d",&b[i][y]);
    }
printf("\n MATRIX ADDITION STARTS:\n\n\n");
for(i=0;i<3;i++)
    {
    for(y=0;y<3;y++)
    c[i][y]=a[i][y]+b[i][y];
    }
printf("The elements after addition==> \n");
for(i=0;i<3;i++)
    {
    for(y=0;y<3;y++)
    printf("\t %d",c[i][y]);
    }
getch();
}

