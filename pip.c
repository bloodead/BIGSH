#include <unistd.h>
#include "base.h"


int	redirect_fd_pip(int fd)
{
	if (dup2(fd,0) == -1)
		id_print_str("ERREUR FD");

	close(fd);
	return 0;
}
