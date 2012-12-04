#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "base.h"

extern char**	environ;


int	main(void)
{
	int	i;
	char*	str;
	char**	str2;
	t_list*	begin;

	begin = init();
	str = "0";
	while (check_exit(str) != 1)
	{
		str = id_getline(0);
		str2 = id_str_to_word_tab(str);
		if (check_list(begin,str) == 0)
		{
			id_print_str("Error command");
		}
		else
			id_print_str("TROUVER COMMAND");
	}
	return (0);
}
