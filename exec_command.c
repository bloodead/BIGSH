#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "base.h"

extern char**	environ;

void	env_command(char** str)
{
	char*	tab[2];

	tab[0] = "/usr/bin/env";
	tab[1] = 0;
	execve(tab[0], tab, environ);
}

void	kill_command(char** str)
{
	char*	tab[2];

	tab[0] = "/bin/kill";
	tab[1] = str[1];
	execve(tab[0], tab, environ);
}

void	pwd_command(char** str)
{
	char*	tab[2];

	tab[0] = "/bin/pwd";
	tab[1] = 0;
	execve(tab[0], tab, environ);
}

void	echo_command(char** str)
{
	char*	tab[2];
	char*	str2;
	
	tab[0] = "/bin/echo";
	//str2 = id_echo(str);
	tab[1] = str[1];
	execve(tab[0], tab, environ);
	//free(str2);
}

void	exit_command(char** str)
{
	exit (0);
}
