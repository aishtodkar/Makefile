
#include"header.h"

void delete_node(CLL **p, int n)
{
	CLL *temp1,*temp;
		temp1=*p;
	if((*p)->num == n)
	{
		temp=*p;
		*p=temp->next;
		while(temp1->next !=temp)
			temp1=temp1->next;
		temp1->next=*p;
		free(temp);
	}
	else if((*p)->next ==*p)
	{
		*p=0;
		free(temp1);
	}
	else
	{
		do
		{
			if(temp1->next->num == n)
			{
				temp=temp1->next;
				temp1->next=temp->next;
				free(temp);
			}
			temp1=temp1->next;
		}while(temp1 !=*p);
	}
}


