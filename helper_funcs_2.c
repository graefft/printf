#include "holberton.h"

/**
*
*
*
*/

int print_binary(va_list dval)
{
        int exp = 0;
        int arg;

        arg = va_arg(dval, int);
        if (arg == 0)
        {
                putchar('0');
        }
        if (arg < 0)
        {
                putchar('-');
        }
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
                {
                        putchar('0');
                }
        }
        return (0);
}

/**
*
*
*
*/

int print_string(va_list sval)
{
        int i;
        char *arg;
        int counter = 0;

        arg = va_arg(sval, char *);
        for (i = 0; arg[i] != '\0'; i++)
        {
                putchar(arg[i]);
                counter++;
        }
        counter--;
        return (counter);
}
