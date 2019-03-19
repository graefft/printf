#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

	//char
	char c = 'z';
	int alen, elen;
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');

	//strings
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	char *str = "hello, world";
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
/*	printf("Expected   : %s$\n", NULL);
	_printf("Actual     : %s$\n", NULL);
*/	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");
	printf("Expected   : notrebloh\n");
	_printf("Actual     : %r\n", "holberton");
/*	printf("Expected   : Holberton\\x0ASchool");
	_printf("Actual     : %S\n", "Holberton\nSchool");*/

	//%%
	alen = elen = 0;
	printf("=====================\n");
	printf("*****PERCENT*****\n");
	printf("=====================\n");
	printf("Expected   : %%\n");
	_printf("Actual     : %%\n");
	elen = printf("Expected   : %%%%\n");
	alen = _printf("Actual     : %%%%\n");
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);

	//i
	printf("=====================\n");
	printf("*****INTEGER*****\n");
	printf("=====================\n");
	alen = elen = 0;
	int p = 237482;
	int n = -328472;
	int z = 0;
	elen = printf("Expected   : %i\n", p);
	alen = _printf("Actual     : %i\n", p);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", n);
	alen = _printf("Actual     : %i\n", n);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", INT_MAX);
	_printf("Actual     : %i\n", INT_MAX);
	printf("Expected   : %i\n", INT_MIN);
	_printf("Actual     : %i\n", INT_MIN);

	//d
	printf("=====================\n");
	printf("*****DECIMAL*****\n");
	printf("=====================\n");
	alen = elen = 0;
	p = 1134001;
	n = -4567;
	z = 0;
	elen = printf("Expected   : %d\n", p);
	alen = _printf("Actual     : %d\n", p);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %d\n", n);
	alen = _printf("Actual     : %d\n", n);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %d\n", INT_MAX);
	_printf("Actual     : %d\n", INT_MAX);
	printf("Expected   : %d\n", INT_MIN);
	_printf("Actual     : %d\n", INT_MIN);

	//u
	printf("=====================\n");
	printf("*****UNSIGNED*****\n");
	printf("=====================\n");
	unsigned int uelen = 0;
	unsigned int ualen = 0;
/*	unsigned int m = 113342421; */
	z = 0;
	elen = printf("Expected   : %u\n", p);
	alen = _printf("Actual     : %u\n", p);
	printf("Expected   : %u\n", elen);
	_printf("Actual     : %u\n", alen);
	uelen = printf("Expected   : %u\n", z);
	ualen = _printf("Actual     : %u\n", z);
	printf("Expected   : %u\n", uelen);
	_printf("Actual     : %u\n", ualen);
	printf("Expected   : %u\n", z);
	_printf("Actual     : %u\n", z);
	printf("Expected   : %u\n", INT_MAX);
	_printf("Actual     : %u\n", INT_MAX);
	printf("Expected   : %u\n", INT_MIN);
	_printf("Actual     : %u\n", INT_MIN);
	printf("=====================\n");

	//b
	_printf("Actual     : %b\n", 157);
	_printf("Actual     : %b\n", INT_MAX);
	_printf("Actual     : %b\n", INT_MIN);
	_printf("Actual     : %b\n", z);

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
  _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
/*    _printf("Unknown:[%r]\n");*/
    return (0);
}
