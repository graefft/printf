#include "holberton.h"

/**
 * convert - itoa replica
 * @num: number to convert
 * @base: base to convert to
 * @lower: flag for lowercase
 *
 * Return: count
 */

char *convert(unsigned long int num, int base, int lower)
{
	static char buf[50];
	char *p;
	static char *a;

	a = lower ? "0123456789abcdef" : "0123456789ABCDEF";

	p = &buf[49];
	*p = '\0';
	while (num != 0)
	{
		*--p = a[num % base];
		num /= base;
	}
	return (p);

}
