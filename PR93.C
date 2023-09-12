#include<stdio.h>
#include<conio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
void insert();
void delet();
void display();
void main()
{
 int choice;
 clrscr();
 printf("**---------------CIRCULAR QUEUE---------------**");
 printf("\n----------------------------------------------\n");
 while(1)
      {
       printf("\n\n#-----------------MENU--------------------#\n");
       printf("\n1).INSERT\n2).DELETE\n3).DISPLAY\n4).EXIT\n");
       printf("\nENTER YOUR CHOICE: ");
	      scanf("%d",&choice);
       switch(choice)
	     {
	       case 1:
		      insert();
		      break;
	       case 2:
		      delet();
		      break;
	       case 3:
		      display();
		      break;
	       case 4:
		      exit(0);
	       default:
		       printf("INVALID INPUT!!!");
	     }
       }
}
void insert()
     {
       int x;
       if(rear==(MAX-1))
	    printf("QUEUE IS FULL!!!");
       else
	    {
	      printf("\nENTER AN ELEMENT: ");
		    scanf("%d",&x);
	      if(rear==-1)
		    {
		      front=0;
		      rear=0;
		      queue[rear]=x;
		    }
	      else
		    {
		      rear=(rear+1)%MAX;
		      queue[rear]=x;
		    }
	      printf("\n %d IS INSERTED IN THE CIRCULAR QUEUE",x);
	    }
       }
void delet()
     {
       int x;
       if(front==-1)
	    printf("QUEUE IS EMPTY!!!");
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
			front=(front+1)%MAX;
		      }
	      printf("\n %d IS DELETED FROM THE CIRCULAR QUEUE",x);
	    }
     }
void display()
     {
       int k;
       if(front==-1)
	    {
	      printf("QUEUE IS EMPTY!!!");
	    }
       else
	    {
	      printf("\nQUEUE ELEMENTS ARE: \n");
	      printf("\nPrinting Values...\n");
	      if(front<=rear)
		      {
			for(k=front;k<=rear;k++)
			    printf("%d\t",queue[k]);
		      }
	      else
		      {
			for(k=front;k<=(MAX+rear);k++)
			    printf("%d\t",queue[k%MAX]);
		      }
	    }
     }
