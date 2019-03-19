#include "holberton.h"

/**
* pf_helper - main algorithm for printf
* @fmt: format string
* @funcarr: array of structs to compare according to specifier
* @args: va_list argument
*
* Return: counter on success, -1 if failure
*/

int pf_helper(const char *fmt, p_t funcarr[], va_list args)
{
	int i = 0, j = 0, flag = 0, temp = 0;
	int counter = 0;

	if (!fmt || (fmt[0] == '%' && fmt[1] == '\0'))
		return (-1);
	for (i = 0; fmt && fmt[i]; i++)
	{
		if (fmt[i] != '%')
		{
/*			if (!fmt[i])
			{
				flag = 1;
				break;
			}*/
			counter += _putchar(fmt[i]);
			continue;
		}
/*		if (flag)
			break;
*/		
		for (j = 0; funcarr[j].c; j++)
		{
			if (fmt[i + 1] == *funcarr[j].c)
			{
				temp = funcarr[j].f(args);
				counter += temp;
				break;
			}
		}
		i++;
		if (funcarr[j].c == 0)
		{
			counter += _putchar('%');
			counter += _putchar(fmt[i]);
		}
	}
	return (counter);
}

/**
* _printf - produces output according to a format
* @format: specifier
* Return: character count
*/

int _printf(const char *format, ...)
{
	int counter = 0;
	p_t funcarr[] = {
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"c", print_char},
		{"x", print_hex},
		{"b", print_binary},
		{"r", print_rev},
		{"R", print_rot13},
		{"%", print_perc},
		{"S", print_strstr},
		{"u", print_un},
		{0, NULL}
	};
	va_list args;

	va_start(args, format);

	counter = pf_helper(format, funcarr, args);

	va_end(args);

	return (counter);
}
