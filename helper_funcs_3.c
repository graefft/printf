#include "holberton.h"
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
                putchar('0');
                counter++;
        }
        if (arg < 0)
        {
                putchar ('-');
                counter++;
                arg = arg * -1;
        }
        while (arg)
        {
                rem = arg % 16;

                if (rem >= 10)
                {
                        putchar(capoffset + (rem - 10));
                        counter++;
                }
                else
                {
                        putchar(capoffset + rem);
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
                                putchar(arg/exp + '0');else
                                putchar(arg/exp + capoffset);
                }
                else
                        putchar(arg/exp + '0');
                arg = arg % exp;
        }
*/
        return (counter);
}
