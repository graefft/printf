#include "holberton.h"

/**
* _printf - produces output according to a format
* @fmt: specifier
* Return: character count
*/

int _printf(char *fmt, ...)
{
	int i = 0, j = 0;
	va_list args;
	char *sval;
	int counter = 0;
/*	void (*pfunc)(va_list);*/

	if (!fmt || (fmt[0] == '%' && fmt[1] == '\0'))
		return (-1);

	p_t funcarr[] = {
		{'i', print_int},
		{'d', print_int},
		{'s', print_string},
		{'c', print_char},
		{'x', print_hex},
		{'b', print_binary},
		{'%', print_char},
		{'\0', NULL}
	};
	va_start(args, fmt);
	if (fmt == NULL)
		return (1);
	sval = fmt;
	for (i = 0; sval[i] != '\0'; i++, counter++)
	{
		if (sval[i] == '%')
		{
			i++;
			for (j = 0; funcarr[j].c != '\0'; j++)
			{
				if (sval[i] == funcarr[j].c)
				{
					
					counter += funcarr[j].f(args);
				}
				if (funcarr[j].c == 0)
				{
					if (!fmt[i])
						break;
					_putchar('%');
					_putchar(fmt[i]);
					counter += 2;
				}
			}
		}
		else
			putchar(sval[i]);
	}
	return (counter);
}
