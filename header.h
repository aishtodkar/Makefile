
#include<stdio.h>
#include<stdlib.h>

typedef struct circular_linked_list
{
	int num;
	struct circular_linked_list *next;
}CLL;

void add_node(CLL **);
void delete_node(CLL **,int);
void print_node(CLL *);


