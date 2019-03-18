#include "holberton.h"

/**
 * print_number - gets num for print_int
 * @i: integer
 * Return: number to print
 */

int print_number(int i)
{
	unsigned int abs;
	int num = 0;

	if (i < 0)
	{
		_putchar('-');
		abs = -i;
	}
	else
		abs = i;
	if (abs / 10)
	{
		print_number(abs / 10);
		num++;
	}
	_putchar(abs % 10 + '0');
	num++;
	return (num);
}


/**
* print_int - print number(s)
* @dval: passed in number value
*
* Return: number of digits printed
*/

int print_int(va_list dval)
{
	int i = va_arg(dval, int);
	
	return (print_number(i));
}
/*	int exponent, temp;
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
	for (exponent = 1; arg / exponent != 0; exponent = exponent * 10)
		;
	while (arg != 0)
	{
		exponent = exponent / 10;
		temp = arg / exponent;
		_putchar(temp + '0');
		arg = arg % exponent;
		counter++;
	}
	counter--;
	return (counter);
}
*/


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
	int counter = 0;

	arg = va_arg(sval, char *);
	for (i = 0; arg[i] != '\0'; i++)
	{
		_putchar(arg[i]);
		counter++;
	}
	return (counter);
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
