#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void insert_beginning();
void insert_end();
void insert_random();
void remove_beginning();
void remove_end();
void remove_random();
void display();
typedef struct linked_list
       {
	 int data;
	 struct linked_list *next;
       } node;
node *start;
void main()
{
  int choice;
  clrscr();
  printf("\n**---------------SINGLE LINKED LIST--------------**");
  printf("\n===================================================\n");
  while(1)
	  {
	    printf("\n#---------------MAIN MENU------------------#\n");
	    printf("\n===================================================\n");
	    printf("\n1).CREATE\n2).DISPLAY\n3).EXIT\n");
	    printf("\nINSERT AT-\n\t\t4).BEGINNING\n\t\t5).END\n\t\t6).AS PER USER'S CHOICE\n");
	    printf("\nDELETE FROM-\n\t\t7).BEGINNING\n\t\t8).END\n\t\t9).AS PER USER'S CHOICE\n");
	    printf("\nENTER YOUR CHOICE: ");
		   scanf("%d",&choice);
	    switch(choice)
		   {
		     case 1:
			     create();
			     break;
		     case 2:
			     display();
			     break;
		     case 3:
			     exit(0);
		     case 4:
			     insert_beginning();
			     break;
		     case 5:
			     insert_end();
			     break;
		     case 6:
			     insert_random();
			     break;
		     case 7:
			     remove_beginning();
			     break;
		     case 8:
			     remove_end();
			     break;
		     case 9:
			     remove_random();
			     break;
		     default:
			     printf("INVALID CHOICE!!!");
		   }
	  }
}
void create()
    {
      node *present,*temp;
      char ch;
      if(start==NULL)
	      {
		present=(node *)malloc(sizeof (node));
		printf("\nENTER DATA FOR THE FIRST NODE: ");
		      scanf("%d",&present->data);
		printf("\n**LINKED LIST IS CREATED**\n");
		start=present;
		do
		   {
		     temp=(node *)malloc(sizeof (node));
		     printf("\nENTER DATA FOR THE NEXT NODE: ");
			    scanf("%d",&temp->data);
		     present->next=temp;
		     present=temp;
		     printf("PRESS 'Y' IF YOU WANT TO ADD MORE DATA OTHER WISE PRESS 'N'");
			    ch=getch();
		   }
		while(ch=='y');
		present->next=NULL;
	      }
      else
	  {
	    printf("\n**LINKED LIST IS ALREADY CREATED**");
	  }
    }
void display()
    {
      node *present;
      printf("LINKED LIST IS: \n");
      printf("Printing Values...\n");
      present=start;
      while(present!=NULL)
	   {
	     printf("%d\t",present->data);
	     present=present->next;
	   }
    }
void insert_beginning()
     {
       node *temp;
       temp=(node *)malloc(sizeof (node));
       printf("ENTER THE DATA TO BE INSERTED AT THE BEGINNING: ");
	     scanf("%d",&temp->data);
       temp->next=start;
       start=temp;
       printf("\n**ELEMENT IS INSERTED**");
     }
void insert_end()
    {
      node *present,*temp;
      temp=(node *)malloc(sizeof (node));
      printf("ENTER THE DATA TO BE INSERTED AT THE END: ");
	     scanf("%d",&temp->data);
      present=start;
      while(present->next!=NULL)
	    {
	      present=present->next;
	    }
      present->next=temp;
      temp->next=NULL;
      printf("\n**ELEMENT IS INSERTED**");
    }
void insert_random()
     {
       int x;
       node *present,*temp;
       printf("ENTER THE NODE AFTER WHICH YOU WANT TO ADD THE NEW NODE: ");
	      scanf("%d",&x);
       temp=(node *)malloc(sizeof (node));
       printf("ENTER THE NEW NODE: ");
	     scanf("%d",&temp->data);
       present=start;
       while(present->data!=x)
	    {
	      present=present->next;
	    }
      temp->next=present->next;
      present->next=temp;
      printf("\n**ELEMENT IS INSERTED**");
    }
void remove_beginning()
    {
      node *temp;
      if(start==NULL)
	   {
	     printf("LINKED LIST IS EMPTY!!!");
	     return;
	   }
      temp=start;
      start=temp->next;
      free(temp);
      printf("\n**ELEMENT IS DELETED FROM THE BEGINNING OF THE LINKED LIST**");
    }
void remove_end()
    {
      node *temp,*present;
      if(start==NULL)
	   {
	     printf("LINKED LIST IS EMPTY!!!");
	     return;
	   }
      present=start;
      while(present->next!=NULL)
	   {
	     temp=present;
	     present=present->next;
	   }
      temp->next=NULL;
      free(present);
      printf("\n**ELEMENT IS DELETED FROM THE END OF THE LINKED LIST**");
    }
void remove_random()
    {
      node *temp,*present;
      int x;
      if(start==NULL)
	   {
	     printf("LINKED LIST IS EMPTY!!!");
	     return;
	   }
	     present=start;
	     printf("ENTER THE ELEMENT TO BE DELETED: ");
		   scanf("%d",&x);
	     while(present->data!=x)
		   {
		     temp=present;
		     present=present->next;
		   }
	     temp->next=present->next;
	     free(present);
	     printf("\n**ELEMENT IS DELETED FROM THE LINKED LIST**");
   }

