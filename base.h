#ifndef _BASE_H_
#define _BASE_H_

typedef struct	s_list_command
{
	char*	name;
	void	(*func)(char** str);
	struct	s_list_command*	next;
}		t_list;

void	id_free(char* str, char** str2, t_list*);
int     redirect_fd_pip(int fd);
void	cat_command(char** str);
void	exit_command(char** str);
int     check_char(char* one, char* tow);
void	id_print_str(char* str);
void	print_list(char* str, t_list* elem,void (*func)(char**));
t_list*	init(void);
char*   id_getline(int fd);
int	check_list(t_list* begin, char** str);
int	check_exit(char* str);

#endif
