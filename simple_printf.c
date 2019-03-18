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
	while (fmt[i])
	{
		for (; fmt[i] != '%'; i++, counter++)
		{
			if (!fmt[i])
			{
				flag = 1;
				break;
			}
			_putchar(fmt[i]);
		}
		if (flag)
			break;
		i++;
		for (j = 0; funcarr[j].c; j++)
			if (fmt[i] == funcarr[j].c)
			{
				temp = funcarr[j].f(args);
				if (temp == -1)
					return (-1);
				counter += temp;
				break;
			}
		if (funcarr[j].c == 0)
		{
			if (!fmt[i])
				break;
			_putchar('%');
			_putchar(fmt[i]);
			counter += 2;
		}
		i++;
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
	va_list args;
	p_t funcarr[] = {
		{'i', print_int},
		{'d', print_int},
		{'s', print_string},
		{'c', print_char},
		{'x', print_hex},
		{'b', print_binary},
		{'%', print_perc},
		{0, NULL}
	};
	va_start(args, format);

	counter = pf_helper(format, funcarr, args);

	va_end(args);

	return (counter);
}

