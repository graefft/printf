#include "holberton.h"

/**
 * print_number - gets num for print_int
 * @i: integer
 * Return: number to print
 */

void print_number(int i)
{
	unsigned int abs;

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
	}
	_putchar(abs % 10 + '0');
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
	int counter = 0;

	counter = countnum(i);

	if (i <= 0)
		counter++;

	print_number(i);

	return (counter);
}

/**
 * countnum - counts number of characters
 * @i: integer to count
 *
 * Return: count
 */

int countnum(int i)
{
	unsigned int counter = 0;
	unsigned int abs;

	if (i < 0)
		abs = -i;
	else
		abs = i;
	while (abs)
	{
		counter++;
		abs = abs / 10;
	}
	return (counter);
}

/**
 * print_un - prints unsigned integer
 * @dval: value to print
 *
 * Return: count
 */

int print_un(va_list dval)
{
	unsigned int ui = va_arg(dval, unsigned int);
	int counter = 0;
	unsigned int i, j, l;
	unsigned int a[10];

	j = 1000000000;
	a[0] = ui / j;

	for (i = 1; i < 10; i++)
	{
		j /= 10;
		a[i] = (ui / j) % 10;
	}

	for (i = 0, l = 0, counter = 0; i < 10; i++)
	{
		l += a[i];
		if (l || i == 9)
		{
			_putchar(a[i] + '0');
			counter++;
		}
	}
	return (counter);
}
