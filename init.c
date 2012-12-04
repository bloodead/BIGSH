#include "base.h"

void	print_list(char* str, void* fct, t_list* elem)
{
	elem->name = str;
	elem->next = (t_list*)malloc(sizeof(*elem));
}

t_list*	init(void)
{
	t_list*	begin;
	t_list*	elem;
	
	elem = (t_list*)malloc(sizeof(*elem));
	begin = elem;
	print_list("cat", elem);
	elem->next = 0;
	return (begin);
}