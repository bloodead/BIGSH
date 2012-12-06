#include <stdlib.h>
#include "base.h"

void	print_list(char* str, t_list* elem,void (*func)(char**))
{
	elem->next = (t_list*)malloc(sizeof(*elem));
	elem->name = str;
	elem->func = (*func);
}

t_list*	init(void)
{
	t_list*	begin;
	t_list*	elem;
	
	elem = (t_list*)malloc(sizeof(*elem));
	begin = elem;
	print_list("cat", elem, cat_command);
	elem = elem->next;
	print_list("exit", elem, exit_command);
	elem->next = 0;
	return (begin);
}
