#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter the temperature in farenhite==>");
scanf("%f",&f);
c=(((f-32)*5)/9);
printf("The temperature in celcius scale is==>%f",c);
getch();
}