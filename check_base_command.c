#include "base.h"
#include <stdio.h>

void	child(int pip[2])
{
	char*	tab[3];

	tab[0] = "/bin/grep";
	tab[1] = "v";
	tab[2] = 0;
	if (dup2(pip[0], 0) == -1)
		return ;
	close(pip[0]);
	close(pip[1]);
	execve(tab[0], tab, environ);
	printf("OHMERGED");
}

int	check_char(char* one, char* tow)
{
	int	i;

	i = 0;
	while (one[i] != '\0' || tow[i] != '\0')
	{
		if (one[i] != tow[i])
			return 0;
		i = i + 1;
	}
	if (one[i] == tow[i])
		return 1;
}

int	check_list(t_list* begin, char* str)
{
	t_list*	elem;

	elem = begin;
	while (elem != 0)
	{
		if (check_char(str,elem->name))
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
