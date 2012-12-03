#include <stdlib.h>
#include <stdio.h>

void id_print_str(char* str)
{
	int num_pos;
	num_pos = 0;
	while(str[num_pos] != '\0')
	{
		write(1,str + num_pos,1);
		num_pos = num_pos + 1;
		
	}
}


void main(void)
{
	char    str[] = "coucou sa va";

	char** ptr;
	str[12] = '\0';
	ptr = id_str_to_word_tab(str);
	id_print_str(ptr[0]);
	id_print_str(ptr[1]);
	id_print_str(ptr[2]);
}

