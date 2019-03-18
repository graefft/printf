#include "holberton.h"

/**
 * print_number - gets num for print_int
 * @i: integer
 * Return: number to print
 */
<<<<<<< HEAD

int print_number(int i)
{
	unsigned int abs;
	int num;

	if (i < 0)
	{
		_putchar('-');
		abs = -i;
	}
	else
		abs = i;
	if (abs / 10)
		print_number(abs / 10);
	num += _putchar(abs % 10 + '0');
	return (num);
}


/**
* print_int - print number(s)
* @dval: passed in number value
*
* Return: number of digits printed
*/
=======
>>>>>>> master

void print_number(int i)
{
<<<<<<< HEAD
	int i = va_arg(dval, int);
	
	return (print_number(i));
=======
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
>>>>>>> master
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
	int i = va_arg(dval, int);
	int counter = 0;

	counter = countnum(i);

	if (i <= 0)
		counter++;

	print_number(i);
	if (counter < 0)
		counter *= -counter;
	return (counter);
}
