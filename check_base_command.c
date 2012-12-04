#include "base.h"

int	check_list(t_list* begin, char* str)
{
	t_list*	elem;

	elem = begin;
	while (elem->next != 0)
	{
		if (str == elem->name)
			return (1);
		elem = elem->next;
	}
	return (0);
}

int	check_exit(char* str)
{
	if (str[0] == 'e' && str[1] == 'x' && str[2] == 'i' 
	    && str[3] == 't')
		return 1;
	else
		return 0;
	return 0;
}
