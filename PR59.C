#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[25],str2[25];
printf("Enter the first string==> ");
gets(str1);
printf("Enter the second string==> ");
gets(str2);
strcat(str1,str2);
puts(str1);
puts(str2);
getch();
}