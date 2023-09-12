#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[50];
int n;
clrscr();
printf("Enter the string==> ");
gets(str);
n=strlen(str);
printf("%d",n);
getch();
}
