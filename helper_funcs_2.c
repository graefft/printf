#include "holberton.h"

/**
* print_binary - print passed in number in base 2
* @dval: passed in number
*
* Return: counter
*/

int print_binary(va_list dval)
{
	long int exponent = 0;
	unsigned int arg;
	long int count = 0;

	arg = va_arg(dval, int);
	if (arg == 0)
	{
		_putchar('0');
		count++;
	}
	for (exponent = 1; arg / exponent != 0; exponent = exponent * 2)
		;
	while (exponent > 1)
	{
		exponent = exponent / 2;
		if (arg / exponent > 0)
		{
			arg = arg - exponent;
			_putchar('1');
			count++;
		}
		else
		{
			_putchar('0');
			count++;
		}
	}
	return (count);
}

/**
 * print_octal - prints number in base 8
 * @dval: number to print
 *
 * Return: count
 */

int print_octal(va_list dval)
{
	char *o;
	unsigned int arg;

	arg = va_arg(dval, int);

	o = convert(arg, 8, 0);

	return (_puts(o));
}

/**
* print_hex_lower - print number in base 16
* @dval: passed in number
*
* Return: counter
*/

int print_hex_lower(va_list dval)
{
	char *d;
	unsigned int arg;
	unsigned int count = 0, i;

	arg = va_arg(dval, int);
	if (arg == 0)
	{
		_putchar('0');
		count++;
	}

	d = convert(arg, 16, 1);

	_puts(d);

	for (i = 0; d[i]; i++)
		count++;

	return (count);
}

/**
 * print_hex_upper - print number in base 16
 * @dval: passed in number
 *
 * Return: count
 */

int print_hex_upper(va_list dval)
{
	char *d;
	unsigned int arg;
	unsigned int count = 0, i;

	arg = va_arg(dval, int);

	if (arg == 0)
	{
		_putchar('0');
		count++;
	}

	d = convert(arg, 16, 0);

	_puts(d);

	for (i = 0; d[i]; i++)
		count++;

	return (count);
}
