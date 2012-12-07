#include "base.h"

extern char**	environ;

void	which_command(char** str)
{
	char*	tab[2];

	tab[0] = "/usr/bin/which";
	tab[1] = str[1];
	execve(tab[0], tab, environ);
}

