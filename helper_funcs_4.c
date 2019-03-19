#include "holberton.h"
/**
* print_string - print all chars in a string
* @sval: passed in string
*
* Return: number of chars printed
*/

int print_string(va_list sval)
{
	int i;
	char *arg;

	arg = va_arg(sval, char *);
	if (!arg)
		arg = "(null)";
/*	for (i = 0; arg[i] != '\0'; i++)
	{
		_putchar(arg[i]);
	}*/
	return (_puts(arg));
}

/**
* print_char - print single character
* @c: passed in char
*
* Return: 1
*/

int print_char(va_list c)
{
	char arg;

	arg = va_arg(c, int);
	_putchar(arg);

	return (1);
}

/**
* print_perc - print percent
* @c: percent character
*
* Return: 1
*/

int print_perc(va_list c)
{
	(void)c;

	_putchar('%');
	return (1);
}
