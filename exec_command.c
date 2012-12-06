#include <stdio.h>
#include "base.h"
#include <fcntl.h>

extern char** environ;

void	cat_command(char** str)
{
	char*	tab[2];
	int	fd;

	fd = open(str[1],O_RDONLY, 0700);
	redirect_fd_pip(fd);
	tab[0] = "/bin/cat";
	tab[1] = 0;
	execve(tab[0],tab,environ);
}

void	exit_command(char** str)
{
	
	printf("HAHA\n");
}
