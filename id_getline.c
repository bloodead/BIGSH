#include <stdlib.h>
#include <unistd.h>
#include "base.h"

int	inc_buf(char** buf, int* size,char c)
{
	char*	tmp;

	*size = *size + 1;
	tmp = realloc(*buf, sizeof(*tmp) * (*size + 1));
	if (tmp == NULL)
		exit (0);
	tmp[*size] = '\0';
	tmp[*size - 1] = c;
	*buf = tmp;
	return (0);
}

char*	id_getline(int fd)
{
	char	c;
	char*	buf;
	int	size;
	int	ret;

	buf = 0;
	size = 0;
	ret = read(fd,&c,1);
	if (ret <= 0)
		return(0);
	buf = malloc(sizeof(*buf));
	if (buf == NULL)
		exit (0);
	buf[0] = 0;
	while (ret > 0)
	{
		if ( c == '\n')
			return (buf);
		if (inc_buf(&buf, &size, c))
			return (buf);
		ret = read(fd,&c,1);
		if (c == '0')
			return(0);
	}
	return (buf);
}
