#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
float av;
clrscr();
printf("Enter the marks of 5 subjects==>");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
av=(a+b+c+d+e)/5;
printf("Average of 5 subjects is==> %f\n",av);
if ((av>=90)&&(av<=100))
    {
    printf("Grade O");
    }
else if (av>=80)
    {
    printf("Geade E");
    }
else if (av>=70)
    {
    printf("Grade A");
    }
else if (av>=60)
    {
    printf("Grade B");
    }
else if (av>=50)
    {
    printf("Grade C");
    }
else if (av>=40)
    {
    printf("Grade D");
    }
else if (av>=30)
    {
    printf("Grade F");
    }
else
    {
    printf("Input Invalid");
    }
getch();
}