#include "holberton.h"

/**
* print_binary - print passed in number in base 2
* @dval: passed in number
*
* Return: counter
*/

int print_binary(va_list dval)
{
	char *b;
	unsigned int arg;
	int count = 0;

	arg = va_arg(dval, int);

	b = convert(arg, 2, 0);

	count += _puts(b);
	return (count - 14);
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

	arg = va_arg(dval, int);

	d = convert(arg, 16, 1);

	return (_puts(d));
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

	arg = va_arg(dval, int);

	d = convert(arg, 16, 0);

	return (_puts(d));
}
