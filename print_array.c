#include "header.h"

/**
*
*
*
*/

void (*print_array(char s))()
{
	int i;

	p_t funcarr[] = {
		{'i', print_int},
		{'d', print_int},
		{'s', print_string},
		{'c', print_char},
		{'x', print_hex},
		{'b', print_binary},
		{'%', print_char}
		};

	for (i = 0; i < 7; i++)
	{
		if (funcarr[i].c == s)
		{
			return (funcarr[i].f);
		}
	}
	return (NULL);
}

