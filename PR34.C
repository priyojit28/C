#include<stdio.h>
#include<conio.h>
void main()
{
void cube (int);
int n;
clrscr();
printf("Entera number to find its cube==> ");
scanf("%d",&n);
cube (n);
getch();
}
void cube(int p)
  {
  int c;
  c=p*p*p;
  printf("Cube of the number is==> %d",c);
  }