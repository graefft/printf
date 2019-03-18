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

/**
 * print_rot13 - prints string in ROT13 encryption
 * @sval: string to print
 * Return: count
 */

int print_rot13(va_list sval)
{
	int i, j;
	int count = 0;
	char *s;
	char change[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	s = va_arg(sval, char *);
	if (s == NULL)
		s = "(nil)";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; change[j] != '\0'; j++)
		{
			if (s[i] == change[j])
			{
				_putchar(rot[j]);
				count++;
				break;
			}
		}
	}
	return (count);
}
