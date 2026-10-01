#include<stdio.h>
#include<stdlib.h>

struct node
 {
 	int data;
 	struct node *next;
 };
 
int main()
  {
    struct node *head=NULL,*newnode,*temp;
  	int n,i;
  	
  	printf("Enter the number of nodes:");
  	scanf("%d",&n);
  	
  	for(i=1;i<=n;i++)
  	{
  	  newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter Data for Nodes:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
	  if(head==NULL)
	  {
	  	head=newnode;
		newnode->next=head;
      }	 
	  else
	  {
	   	temp=head;
	   	
	   	while(temp->next!=head)
	    {
	  		temp=temp->next;
	  		
		}
		temp->next=newnode;
		newnode->next=head;
	  }
	}
	
	printf("\nsingly circular Linked List:\n");
	
	if(temp!=head);
	{
		temp=head;
	
	 do{
		printf("%d->",temp->data);
		temp=temp->next;
	 }while(temp!=head);
	 printf("\nBack to first node");
	}
	

  return 0;
}
