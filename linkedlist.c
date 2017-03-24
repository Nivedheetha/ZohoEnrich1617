#include <stdio.h>
#include<stdlib.h>
 struct node
{
    int data;
    struct node *next;
}*head=NULL,*p,*q;
void append(int x)
{
    p=(struct node *)malloc(sizeof( struct node));
	p->data=x;
	p->next=NULL;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=p;
}
void create(int x)
{
	p=(struct node *)malloc(sizeof( struct node));
	p->data=x;
	p->next=NULL;
	head=p;
}
void display()
{
	if(head==NULL)
	printf("empty list\n");
	else
	{
		q=head;
		while(q!=NULL)
		{
			printf("%d->",q->data);
			q=q->next;
		}
		printf("NULL\n");
	}
}
void search(int val)
{
	int count=0;
	while(q->next!=NULL)
	{
		if(q->data==val)
		{
      break;
    }
		else
			{
        count++;
      }
		q=q->next;
	}
	printf("%d",count);
}
void searchnext(int val)
{
    int i=8888;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
    	q=head;
        while(q!=NULL)
        {
            if(q->data==val)
            {
               if(q->next!=NULL)
               {
                   q=q->next;
                   i=q->data;
                   break;
               }
            }
            q=q->next;
        }
    }
    if(i==8888)
    {
    	printf("there is no next element\n");
    }
    else
    {
    	printf("%d",i);
    }
}
void main()
{
    int ch,val;
    char chn='y';
    while(chn=='y'||chn=='Y')
    {
    	printf("1.create\n2.append\n3.display\n4.searchnext\n5.search");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:
    			printf("Enter data:\n");
    			scanf("%d",&val);
    			create(val);
    			break;
    		case 2:
    			printf("Enter data:\n");
    			scanf("%d",&val);
    			append(val);
    			break;
    		case 3:
    			display();
    			break;
    		case 4:
    			printf("Enter data:\n");
    			scanf("%d",&val);
    			searchnext(val);
    			break;
    		case 5:
    			printf("Enter data:\n");
    			scanf("%d",&val);
    			search(val);
    			break;
    	}
    	printf("enter y to continue or n to exit:\n");
    	scanf("%c",&chn);
    }
}
