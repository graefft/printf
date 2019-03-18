#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct printer - prints diff function depending on argument
 * @c: conversion specifier
 * @f: function to use
 */
typedef struct printer
{
	char c;
	int (*f)(va_list ap);
} p_t;

int countnum(int i);
int _putchar(char c);
void tusBasicTester(void);
int pf_helper(const char *fmt, p_t funcarr[], va_list args);
int _printf(const char *fmt, ...);
void (*print_array(char s))();
void print_number(int i);
int print_int(va_list dval);
int print_string(va_list sval);
int print_char(va_list c);
int print_binary(va_list dval);
int print_hex(va_list dval);
int print_perc(va_list c);
<<<<<<< HEAD
=======
int print_un(va_list dval);
>>>>>>> master
int print_rev(va_list sval);
int print_rot13(va_list sval);
int _strlen(char *s);

#endif
