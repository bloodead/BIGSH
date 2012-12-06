#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "base.h"

extern char**	environ;

void	id_free(char** str, t_list*);
{
	t_list*	elem;

	free(str)
}

int	main(void)
{
	int	i;
	char*	str;
	char**	str2;
	t_list*	begin;

	begin = init();
	str = "0";
	i = 0;
	while (1)
	{
		str = id_getline(0);
		str2 = id_str_to_word_tab(str);
		if (check_list(begin,str2[0]) == 0)
			id_print_str("Error command\n");
		//else
			//exec_command(str2);
	}
	//free(str2, begin);
	return (0);
}
