#include "holberton.h"

/**
*
*
*
*/

int print_int(va_list dval)
{
	int exp, temp;
	int arg;
	int counter = 0;

	arg = va_arg(dval, int);
	if (arg == 0)
		_putchar('0');
	if (arg < 0)
	{
		_putchar('-');
		counter++;
		arg = arg * -1;
	}
	for (exp = 1; arg/exp != 0; exp = exp * 10)
		;
	while (arg != 0)
	{
		exp = exp / 10;
		temp = arg/exp;
		_putchar(temp + '0');
		arg = arg % exp;
		counter++;
	}
	counter--;
	return (counter);
}

/**
*
*
*
*/

int print_string(va_list sval)
{
	int i;
	char *arg;
	int counter = 0;

	arg = va_arg(sval, char *);
	for (i = 0; arg[i] != '\0'; i++)
	{
		_putchar(arg[i]);
		counter++;
	}
	counter--;
	return (counter);
}

/**
*
*
*
*/

int print_char(va_list c)
{
	char arg;

	arg = va_arg(c, int);
	_putchar(arg);

	return (1);
}

/**
*
*
*
*/

int print_perc(va_list c)
{
	(void)c;

	_putchar('%');
	return (1);
}
