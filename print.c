
#include"header.h"

void print_node(CLL *p)
{
	if(p)
	{
		CLL *temp1;
		temp1=p;
		printf("\nPrinting CLL:\n");
		do
		{
			printf("%d\t",temp1->num);
			temp1=temp1->next;
		}while(temp1 !=p);
		printf("\n");
	}
	else
		printf("CLL is empty.\n");
}
