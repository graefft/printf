#include "header.h"

/**
*
*
*
*/

void print_int(va_list dval)
{
	int exp, temp;
	int arg;

	arg = va_arg(dval, int);
	if (arg == 0)
		putchar('0');
	if (arg < 0)
	{
		putchar ('-');
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
	}
}

/**
*
*
*
*/

void print_string(va_list sval)
{
	int i;
	char *arg;

	arg = va_arg(sval, char *);
	for(i = 0; arg[i] != '\0'; i++)
		putchar(arg[i]);
}

/**
*
*
*
*/

void print_char(va_list c)
{
	char arg;

	arg = va_arg(c, int);
	putchar(arg);
}

/**
*
*
*
*
*/

void print_binary(va_list dval)
{
	int exp = 0;
	int arg;

	arg = va_arg(dval, int);
	if (arg == 0)
		putchar('0');
	if (arg < 0)
		putchar('-');
	for (exp = 1; arg/exp != 0; exp = exp * 2)
		;
	while (exp > 1)
	{
		exp = exp / 2;
		if (arg / exp > 0)
		{
			arg = arg - exp;
			putchar('1');
		}
		else
			putchar('0');
	}
}

/**
*
*
*
*/

void print_hex(va_list dval)
{
	int capoffset;
	int exp;
	int arg;

	arg = va_arg(dval, int);
	capoffset = 87;
	if (arg == 'X')
		capoffset = 55;
	if (arg == 0)
		putchar('0');
	if (arg < 0)
	{
		putchar ('-');
		arg = arg * -1;
	}
	for (exp = 1; arg/exp != 0; exp = exp * 16)
		;
	while (exp > 1)
	{
		exp = exp / 16;
		if (arg/exp > 0)
		{
			if (arg/exp < 10)
				putchar(arg/exp + '0');
			else
				putchar(arg/exp + capoffset);
		}
		else
			putchar(arg/exp + '0');
		arg = arg % exp;
	}
}









