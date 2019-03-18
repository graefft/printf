#include "holberton.h"

/**
*
*
*
*
*/

int print_binary(va_list dval)
{
        int exponent = 0;
        int arg;

        arg = va_arg(dval, int);
        if (arg == 0)
        {
                _putchar('0');
        }
        if (arg < 0)
        {
                _putchar('-');
        }
        for (exponent = 1; arg/exponent != 0; exponent = exponent * 2)
                ;
        while (exponent > 1)
        {
                exponent = exponent / 2;
                if (arg / exponent > 0)
                {
                        arg = arg - exponent;
                        _putchar('1');
                }
                else
                {
                        _putchar('0');
                }
        }
        return (0);
}

/**
*
*
*
*/

int print_hex(va_list dval)
{
        int capoffset;
        int rem;
        int arg;
        int counter = 0;

        arg = va_arg(dval, int);
        if (arg == 'x')
                capoffset = 87;
        else if (arg == 'X')
                capoffset = 55;
        if (arg == 0)
        {
                _putchar('0');
                counter++;
        }
        if (arg < 0)
        {
                _putchar('-');
                counter++;
                arg = arg * -1;
        }
        while (arg)
        {
                rem = arg % 16;

                if (rem >= 10)
                {
                        _putchar(capoffset + (rem - 10));
                        counter++;
                }
                else
                {
                        _putchar(capoffset + rem);
                        counter++;
                }
                arg = arg / 16;
        }

/*      for (exp = 1; arg/exp != 0; exp = exp * 16)
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
*/
        return (counter);
}
