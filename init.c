#include <stdlib.h>
#include "base.h"

void	print_list(char* str, t_list* elem)
{
	elem->next = (t_list*)malloc(sizeof(*elem));
	elem->name = str;
}

t_list*	init(void)
{
	t_list*	begin;
	t_list*	elem;
	
	elem = (t_list*)malloc(sizeof(*elem));
	begin = elem;
	print_list("cat", elem);
	print_list("exit", elem);
	elem->next = 0;
	return (begin);
}
