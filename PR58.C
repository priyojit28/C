#include<stdio.h>
#include<conio.h>
void main()
{
char name[50],ch;
int i;
clrscr();
printf("Enter a string==> ");
for(i=0;i<50;i++)
    {
    ch=getchar();
    if(ch=='\n')
    break;
    name[i]=ch;
    }
name[i]='\0';
printf("The given string is==> ");
puts(name);
getch();
}
