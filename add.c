
#include"header.h"

void add_node(CLL **p)
{
	CLL *temp,*temp1;
	temp=malloc(sizeof(CLL));
	printf("Enter the value for node:\n");
	scanf("%d",&temp->num);
	temp->next=temp;
	if(*p==0)
		*p=temp;
	else
	{
		temp1=*p;
		while(temp1->next != *p)
			temp1=temp1->next;
		temp1->next=temp;
		temp->next=*p;
	}
}
