#ifndef _BASE_H_
#define _BASE_H_

typedef struct	s_list_command
{
	char*	name;
	struct	s_list_command*	next;
}		t_list;

void	print_list(char* str, t_list* elem);
t_list*	init(void);
char*   id_getline(int fd);
int	check_list(t_list* begin, char* str);
int	check_exit(char* str);

#endif
