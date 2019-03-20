#include "holberton.h"

/**
* print_string - print all chars in a string
* @sval: passed in string
*
* Return: number of chars printed
*/

int print_string(va_list sval)
{
	char *arg;

	arg = va_arg(sval, char *);
	if (!arg)
		arg = "(null)";
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

/**
* print_p - print address of a variable
* @sval: passed in address (string)
*
* Return: count
*/

int print_p(va_list sval)
{
	unsigned long int p = va_arg(sval, unsigned long int);
	int count = 0;
	char *a;

	if (p == 0)
		_puts("(nil)");
	else
	{
		a = convert(p, 16, 1);
		count += _putchar('0');
		count += _putchar('x');
		count += _puts(a);
	}

	return (count);
}
