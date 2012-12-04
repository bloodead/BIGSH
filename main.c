#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "base.h"

extern char**	environ;


int	main(void)
{
	char*	str;

	while (check_exit(str) != 1)
	{
		str = id_getline(0);
	}

	printf("");

	return (0);
}

