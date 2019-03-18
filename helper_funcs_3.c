#include "holberton.h"

/**
 * _strlen - gets length of string
 * @s: string pointer
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * print_rev - prints string in reverse
 * @sval - string to print
 * Return: count
 */

int print_rev(va_list sval)
{
	int i, len;
	char *s;

	s = va_arg(sval, char*);
	if (s == NULL)
		s = "(nil)";
	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	return (len);
}
