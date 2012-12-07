#include <stdlib.h>
#include "base.h"

char*	id_print_tab(char** str, char* str2)
{
	int	word;
	int	letter;
	int	pos;

	pos = 0;
	letter = 0;
	word = 1;
	while (str[word] != '\0')
	{
		while (str[word][letter] != '\0')
		{
			str2[pos] = str[word][letter];
			letter = letter + 1;
			pos = pos + 1;
		}
		letter = 0;
		word = word + 1;
	}
	return (str2);
}

int	count_size(char** str)
{
	int	word;
	int	letter;
	int	count;

	letter = 0;
	count = 0;
	word = 1;
	while (str[word] != '\0')
	{
		while (str[word][letter] != '\0')
		{
			count = count + 1;
			letter = letter + 1;
		}
		letter = 0;
		word = word + 1;
	}
	return (count + (word - 1));
}

char*	id_echo(char** str)
{
	int	size;
	char*	str2;

	size = count_size(str);
	str2 = malloc(sizeof(char) * size);
	id_print_tab(str, str2);
}
