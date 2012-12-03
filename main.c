#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

extern char**	environ;

void	child(int fd)
{
	char*	tab[2];

	tab[0] = "/bin/cat";
	tab[1] = 0;
	if (dup2(fd, 0) == -1)
		return ;
	close(fd);
	execve(tab[0], tab, environ);
	printf("OHMERGED\n");
}

int	main(int argc, char** argv)
{
	int	fd;
	int	ret;

	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY, 0700);
		if (fd == -1)
			return (42);
		ret = fork();
		if (ret == -1)
		{
			close(fd);
			return (42);
		}
		if (ret != 0)
			wait();
		else if (ret == 0)
			child(fd);
	}
	return (0);
}
