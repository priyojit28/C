#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX],front=-1,rear=-1;
void insert();
void delete();
void display();
void main()
{
int ch;
clrscr();
printf("**---------------------QUEUE--------------------**");
printf("\n--------------------------------------------------\n");
while(1)
       {
	 printf("\n\n#---------------MENU---------------#");
	 printf("\n\n1).INSERT\n2).DELETE\n3).DISPLAY\n4).EXIT");
	 printf("\n\nENTER YOUR CHOICE: ");
		scanf("%d",&ch);
	 switch(ch)
		  {
		    case 1:
			   insert();
			   break;
		    case 2:
			   delete();
			   break;
		    case 3:
			   display();
			   break;
		    case 4:
			    exit(4);
		    default:
			    printf("Oops!!!\nINVALID INPUT!!!");
		  }
       }
}
void insert()
     {
       int x;
       if(rear==(MAX-1))
	       printf("QUEUE IS FULL!");
       else
	   {
	     printf("\n\nENTER AN ELEMENT: ");
		    scanf("%d",&x);
	     if(rear==-1)
		{
		  front=0;
		  rear=0;
		  queue[rear]=x;
		}
	     else
		 {
		   rear=rear+1;
		   queue[rear]=x;
		 }
	     printf("\n\n%d IS INSERTED IN THE QUEUE",x);
	   }
       }
void delete()
     {
       int x;
       if(rear==-1)
	  printf("QUEUE IS EMPTY!");
       else
	   {
	     x=queue[front];
	     if(front==rear)
		 {
		   front=-1;
		   rear=-1;
		 }
	     else
		 {
		   front=front+1;
		 }
	     printf("\n\n%d IS DELETED FROM THE QUEUE",x);
	   }
     }
void display()
     {
       int k;
       if(front==-1)
	  printf("QUEUE IS EMPTY!");
       else
	   {
	     printf("\n\n*ELEMENTS OF THE QUEUE*");
	     printf("\n\nPrinting Values...\n\n");
	     for(k=front;k<=rear;k++)
		 printf("%d\t",queue[k]);
	   }
     }
