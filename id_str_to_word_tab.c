#include <stdlib.h>
#include <stdio.h>

char** id_print_word(char* str, char** ptr)
{
	int	pos;
	int	pos2;
	int	count;

	pos = 0;
	pos2 = 0;
	count = 0;
	while (str[pos] != '\0')
	{
		ptr[count][pos] = str[pos2];
		pos = pos + 1;
		pos2 = pos2 + 1;
		if (str[pos2] == ' ')
		{
			count = count + 1;
			pos = 0;
		}
		while (str[pos2] == ' ')
				pos2 = pos2 + 1;
	}
	return (ptr);
}

int	id_count_letters(char* str, int* pos)
{
	int	count;

	count = 0;
	while (str[*pos] != '\0')
	{
		if(str[*pos] == ' ')
		{
			*pos = *pos + 1;
			return (count);
		}
		*pos = *pos + 1;
		count  = count + 1;
	}
	*pos = *pos + 1;
	return (count);
}

int	id_count_words(char* str)
{
	int	pos;
	int	count;

	pos = 0;
	count = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == ' ')
			count = count + 1;
		while (str[pos] == ' ')
			pos = pos + 1;
		pos = pos + 1;
	}
	return (count + 1);
}

char**	 id_str_to_word_tab(char* str)
{
	int	count;
	int	count2;
	int	ret_letters;
	int	pos;
	char**	ptr;
	
	pos = 0;
	count2 = 0;
	count = id_count_words(str);
	ptr = malloc(sizeof(char) * count);
	while (count2 != count)
	{
		ret_letters = id_count_letters(str, &pos);
		ptr[count2] = malloc(sizeof(char) * ret_letters);	
		count2 = count2 + 1;
	}
	ptr = id_print_word(str, ptr);
	
	return (ptr);
}
