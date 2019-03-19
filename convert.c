#include "holberton.h"

/**
 * convert - itoa
 *
 */

char* convert(unsigned long num, int base, int lower)
{
	static char buf[32];
	char *p;
	char *a;
	int i;

	a = lower ? "0123456789abcdef" : "0123456789ABCDEF";

	p = &buf[31];
	*p = '\0';
	while (num != 0)
	{
		*--p = a[num % base];
		num /= base;
	}
	return (p);

}
