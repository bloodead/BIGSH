#include "base.h"
#include <stdlib.h>

void	id_free_list(t_list* begin)
{
	t_list*	elem;

	while (begin->next != 0)
	{
		elem = begin->next;
		free(begin);
		begin = elem;
	}
}

void	id_free_getline(char** str2, char* str)
{
	int	count;
	int	count2;

	count2 = 0;
	count = id_count_words(str);
	while (count2 != count - 1)
	{
		free(str2[count2]);
		count2 = count2 + 1;
	}
	free(str);
}

void  id_free(char* str, char** str2, t_list* begin)
{
	id_free_getline(str2, str);
	id_free_list(begin);
}
