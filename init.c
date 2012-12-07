#include <stdlib.h>
#include "base.h"

void	print_command(t_list* elem)
{
	//print_list("history", elem, history_command);
	//elem = elem->next;
	print_list("exit", elem, exit_command);
	elem = elem->next;
	print_list("pwd", elem, pwd_command);
	elem = elem->next;
	print_list("which", elem, which_command);
	elem = elem->next;
	//print_list("export", elem, export_command);
	//elem = elem->next;
	print_list("env", elem, env_command);
	elem = elem->next;
	//print_list("cd", elem, cd_command);
	//elem = elem->next;
	//print_list("alias", elem, alias_command);
	//elem = elem->next;
	print_list("echo", elem, echo_command);
	elem = elem->next;
	print_list("kill", elem, kill_command);
	elem->next = 0;
}

void	print_list(char* str, t_list* elem,void (*func)(char**))
{
	elem->next = (t_list*)malloc(sizeof(*elem));
	if (elem == NULL)
		exit (0);
	elem->name = str;
	elem->func = (*func);
}

t_list*	init(void)
{
	t_list*	begin;
	t_list*	elem;
	
	elem = (t_list*)malloc(sizeof(*elem));
	if (elem == NULL)
		exit (0);
	begin = elem;
	print_command(elem);
	return (begin);
}
