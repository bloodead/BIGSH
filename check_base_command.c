#include "base.h"

int check_exit(char* str)
{
	if (str[0] == 'e' && str[1] == 'x' && str[2] == 'i' 
	    && str[3] == 't')
		return 1;
	else
		return 0;
	return 0;
}
