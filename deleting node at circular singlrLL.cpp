#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*prev;
	int data;
	struct node *next;
};
struct node *head=0,*tail=0,*temp=0;
void create()
{
	struct node *newnode;
	int i,n;
	printf("\n enter n size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter node %d data:",i+1);
		scanf("%d",&newnode->data);
		newnode->prev=0;
		newnode->next=0;
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
	}
}
	void display()
	{
		temp=head;
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
	int main()
	{
		create();
		display();
		if(head==0)
		{
			printf("\n list is empty")
		}
		else if(head==tail)
		{
			free(head);
			head=tail=0;
		}
		else
		{
			temp=head;
			while(temp->next!=tail)
			{
				temp=temp->next;
			}
			temp->next=head;
			free(tail);
			tail=temp;
		}
		printf("\n After deleting:");
		display();
		print("\n%d",tail->next->data);
		return 0;
	}
