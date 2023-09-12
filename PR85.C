#include<stdio.h>
#include<conio.h>
struct engineering
       {
	 char name[100];
	 int roll;
	 int sub1,sub2,sub3,total;
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
	   printf("ENTER MARKS OF THE FIRST SUBJECT: ");
		 scanf("%d",&student[i].sub1);
	   printf("ENTER MARKS OF THE SECOND SUBJECT: ");
		 scanf("%d",&student[i].sub2);
	   printf("ENTER MARKS OF THE THIRD SUBJECT: ");
		 scanf("%d",&student[i].sub3);
	   student[i].total=student[i].sub1+student[i].sub2+student[i].sub3;
	 }
printf("\n--------------------DATABASE--------------------\n");
printf("\nNAME\t\tROLL\t\tTOTAL MARKS");
printf("\n------------------------------------------------\n");
      for(i=0;i<n;i++)
	 {
	   printf("\n%s\t\t%d\t\t%d",student[i].name,student[i].roll,student[i].total);
	 }
getch();
}
