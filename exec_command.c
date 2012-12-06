#include <stdio.h>
#include "base.h"
#include <fcntl.h>

extern char** environ;

void	echo_command(char** str)
{
	char*	tab[2];
	int	fd;
	
	tab[0] = "/bin/echo";
	tab[1] = str[1];
	execve(tab[0], tab, environ);
}

void	exit_command(char** str)
{
	printf("HAHA\n");
}
