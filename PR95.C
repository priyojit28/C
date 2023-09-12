#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
typedef struct linked_list
       {
	 int data;
	 struct linked_list *next;
       }node;
node *top;
void main()
{
  int ch;
  clrscr();
  printf("**----------STACK USING LINKED LIST----------**\n");
  printf("===============================================\n");
  while(1)
	  {
	    printf("\n\n#----------MAIN MENU----------#\n");
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
				exit(0);
			default:
				printf("INVALID INPUT!!!");
		      }
	  }
}
void display()
    {
      node *present;
      if(top!=NULL)
	     {
	       printf("STACK ELEMENTS ARE: \n");
	       printf("\nPrinting Values...\n");
	       present=top;
	       while(present!=NULL)
			    {
			      printf("%d\n",present->data);
			      present=present->next;
			    }
	     }
      else
	     {
	       printf("\nEMPTY STACK!!!");
	     }
    }
void push()
    {
      node *temp;
      temp=(node *)malloc(sizeof(node));
      if(top==NULL)
	     {
	       printf("ENTER AN ELEMENT: ");
		     scanf("%d",&temp->data);
	       printf("\n**ELEMENT IS PUSHED INTO THE STACK**");
	       temp->next=NULL;
	       top=temp;
	     }
      else
	     {
	       if(temp==NULL)
		       {
			 printf("STACK OVERFLOW!!!");
			 return;
		       }
	       printf("ENTER AN ELEMENT: ");
		     scanf("%d",&temp->data);
	       temp->next=top;
	       top=temp;
	       printf("\n**ELEMENT IS PUSHED INTO THE STACK**");
	     }
    }
void pop()
    {
      node *temp;
      if(top==NULL)
	     {
	       printf("\nSTACK UNDERFLOW!!!");
	       return;
	     }
      temp=top;
      top=temp->next;
      free(temp);
      printf("\n**ELEMENT IS POPED FROM THE STACK**");
    }