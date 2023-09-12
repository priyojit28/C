#include<stdio.h>
#include<conio.h>
struct engineering
       {
	 char name[100];
	 int roll;
	 int age;
       };
void main()
{
struct engineering student[100];
int i,n;
clrscr();
printf("ENTER TOTAL NUMBER OF STUDENTS: ");
scanf("%d",&n);
     for(i=0;i<n;i++)
	 {
	   printf("ENTER NAME: ");
		 scanf("%s",&student[i].name);
	   printf("ENTER ROLL NO.: ");
		 scanf("%d",&student[i].roll);
	   printf("ENTER AGE: ");
		 scanf("%d",&student[i].age);
	 }
printf("\n--------------------DATABASE--------------------\n");
printf("\nNAME\t\tROLL\t\tAGE");
printf("\n------------------------------------------------\n");
      for(i=0;i<n;i++)
	 {
	   printf("\n%s\t\t%d\t\t%d",student[i].name,student[i].roll,student[i].age);
	 }
getch();
}
