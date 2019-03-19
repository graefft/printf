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
	long int arg;
	long int counter = 0;

	arg = va_arg(dval, int);
	if (arg == 0)
	{
		_putchar('0');
		counter++;
	}
	if (arg < 0)
	{
		_putchar('-');
		counter++;
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
			counter++;
		}
		else
		{
			_putchar('0');
			counter++;
		}
	}
	return (counter);
}

/**
* print_hex - print number in base 16
* @dval: passed in number
*
* Return: counter
*/

int print_hex(va_list dval)
{
	int capoffset;
	int rem;
	int arg;
	int counter = 0;

	arg = va_arg(dval, int);
	if (arg == 'x')
		capoffset = 87;
	else if (arg == 'X')
		capoffset = 55;
	if (arg == 0)
	{
		_putchar('0');
		counter++;
	}
	if (arg < 0)
	{
		_putchar('-');
		counter++;
		arg = arg * -1;
	}
	while (arg)
	{
		rem = arg % 16;

		if (rem < 10)
		{
			_putchar(capoffset + rem);
			counter++;
		}
		else
		{
			_putchar(capoffset + rem);
			counter++;
		}
		arg = arg / 16;
	}
	return (counter);
}
