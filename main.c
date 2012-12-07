#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "base.h"

extern char**	environ;

void	id_print_error(char** str)
{
	id_print_str(str[0]);
	id_print_str(": command not found");
	id_print_str("\n");
}

int	main(void)
{
	int	i;
	char*	str;
	char**	str2;
	t_list*	begin;

	begin = init();
	while (1)
	{
		id_print_str("SHELL BLOODEAD SERENIIITY: ");
		str = id_getline(0);
		str2 = (char**)id_str_to_word_tab(str);
		if (check_list(begin,str2) == 0)
			id_print_error(str2);
		id_free(str, str2, begin);
	}
	free(begin);
	return (0);
}
