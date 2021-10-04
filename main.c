
#include"header.h"

void main()
{
	CLL *hp=0;
	add_node(&hp);
	add_node(&hp);
	add_node(&hp);
	add_node(&hp);
	print_node(hp);
	delete_node(&hp,10);
	print_node(hp);
}
