#include "holberton.h"

/**
*
*
*
*/

int print_d(va_list dval)
{
	int exp, temp;
	int arg;
	int counter = 0;

	arg = va_arg(dval, int);
	if (arg == 0)
		putchar('0');
	if (arg < 0)
	{
		putchar('-');
		counter++;
		arg = arg * -1;
	}
	for (exp = 1; arg/exp != 0; exp = exp * 10)
		;
	while (arg != 0)
	{
		exp = exp / 10;
		temp = arg/exp;
		putchar(temp + '0');
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

int print_i(va_list dval)
{
	return (print_d(dval));
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
	putchar(arg);

	return (0);
}

/**
*
*
*
*/

int print_perc(va_list perc)
{
	(void)perc;
	_putchar('%');
	return (1);
}
