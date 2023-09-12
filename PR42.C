#include<stdio.h>
#include<conio.h>
void main()
{
int km,hm,dm,m;
clrscr();
printf("Enter the length in kilo meter==> ");
scanf("%d",&km);
printf("Enter the length in hecta meter==> ");
scanf("%d",&hm);
printf("Enter the length in deca meter==> ");
scanf("%d",&dm);
printf("Enter the length in meter==> ");
scanf("%d",&m);
hm=(km*10)+hm;
dm=(hm*10)+dm;
m=(dm*10)+m;
printf("The length in meter is==> %d",m);
getch();
}