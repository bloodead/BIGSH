#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
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
	while (1)
	{
		id_print_str("SHELL BLOODEAD SERENIIITY: ");
		str = id_getline(0);
		str2 = id_str_to_word_tab(str);
		if (check_list(begin,str2) == 0)
			id_print_str("Error command\n");
		id_free(str, str2, begin);
	}
	free(begin);
	id_print_str("test");
	return (0);
}
