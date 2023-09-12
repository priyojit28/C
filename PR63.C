#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
clrscr();
printf("Enter the string: \n");
gets(str1);
gets(str2);
if(strcmp(str1,str2)>0)
printf("str 1 greater");
else if(strcmp(str1,str2)<0)
printf("Str2 is greater");
else
printf("Equal string  ");
getch();
}