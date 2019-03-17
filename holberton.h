#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

typedef struct printer
{
	char c;
	void (*f)(va_list ap);
} p_t;

void tusBasicTester();
int _printf(char *fmt, ...);
void (*print_array(char s))();
void print_int(va_list dval);
void print_string(va_list sval);
void print_char(va_list c);
void print_binary(va_list dval);
void print_hex(va_list dval);
void print_percent(va_list dval);

#endif
