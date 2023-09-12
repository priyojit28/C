#include<stdio.h>
#include<conio.h>
#define MAX 5
void push();
void pop();
void display();
int stack[MAX];
int top=-1;
void main()
{
 int ch;
 clrscr();
 printf("**----------------STACK---------------**");
 printf("\n----------------------------------------\n");
 while(1)
    {
     printf("\n#-----------------MENU-------------------#\n");
     printf("\n1).PUSH\n2).POP\n3).DISPLAY\n4).EXIT\n");
     printf("\nENTER YOUR CHOICE: ");
	   scanf("%d",&ch);
     switch(ch)
	  {
	   case 1:
		  push();
		  break;
	   case 2:
		  pop();
		  break;
	   case 3:
		  display();
		  break;
	   case 4:
		  exit(4);
	   default:
		  printf("Oops!!!\nWRONG CHOICE!!!\n");
	   }
     }
}
void push()
    {
     int x;
     if(top==(MAX-1))
	   printf("\nOVERFLOW!!!\nSTACK IS FULL!!!\n");
     else
	 {
	   printf("\nEnter an element: ");
		 scanf("%d",&x);
	   top=top+1;
	   stack[top]=x;
	   printf("%d is inserted",x);
	 }
     }
void pop()
    {
      int x;
      if(top==-1)
	    printf("\nUNDERFLOW!!!\nSTACK IS EMPTY!!!\n");
      else
	   {
	     x=stack[top];
	     top=top-1;
	     printf("%d is deleted",x);
	   }
    }
void display()
    {
     int k;
     if(top==-1)
	   printf("\nSTACK IS EMPTY!!!\n");
     else
	  {
	    printf("\n----------ELEMENTS OF THE STACK----------\n");
	    for(k=top;k>=0;k--)
		printf("%d\n",stack[k]);
	  }
    }