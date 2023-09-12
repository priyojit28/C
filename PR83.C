#include<stdio.h>
#include<conio.h>
struct engineering
       {
	 char name[100];
	 int roll;
	 float marks;
       };
void main()
{
struct engineering student;
       student.name;
       student.roll;
       student.marks;
clrscr();
printf("ENTER NAME: ");
scanf("%s",&student.name);
printf("ENTER ROLL NO.: ");
scanf("%d",&student.roll);
printf("ENTER MARKS: ");
scanf("%f",&student.marks);
printf("\n--------------------DATABASE--------------------\n");
printf("\nNAME\t\tROLL\t\tMARKS");
printf("\n------------------------------------------------\n");
printf("\n%s\t\t%d\t\t%f",student.name,student.roll,student.marks);
getch();
}
