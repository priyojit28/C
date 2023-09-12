#include<stdio.h>
#include<conio.h>
void main()
{
int cube(void);
     {
     int c;
     clrscr();
     c=cube();
     printf("CUBE IS: %d",c);
     getch();
     }
}
int cube(void)
     {
     int c,n;
     printf("ENTER A NUMBER: ");
     scanf("%d",&n);
     c=n*n*n;
     return c;
     }

