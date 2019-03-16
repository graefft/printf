#include "header.h"

/**
*
*
*
*
*/

int _printf(const char *fmt, ...)
{
	int i = 0, j = 0;
	va_list args;
	int dval;
	int exp;
	int temp;
	char *sval;

	va_start(args, fmt);

        if (fmt == NULL)
                return(1);

        for(i = 0; fmt[i] != '\0'; i++)
        {
                if (fmt[i] == '%')
                {
                        i++;
                        switch(fmt[i])
                        {
			case'd': case 'i':
                                dval = va_arg(args, int);
            	                if (dval == 0)
                                        putchar('0');
                                if (dval < 0)
                                {
                                        putchar ('-');
                                        dval = dval * -1;
                                }
                                for (exp = 1; dval/exp != 0; exp = exp * 10)
                                                ;
                                while (dval != 0)
                                {
                                        exp = exp / 10;
                                        temp = dval/exp;
                                        putchar(temp + '0');
                                        dval = dval % exp;
                                }
                                break;
                        case 's':
                                sval = va_arg(args, char *);
                                for(j = 0; sval[j] != '\0'; j++)
                                {
                                        putchar(sval[j]);
                                }
                                break;
                        case'c':
                                dval = va_arg(args, int);
                                putchar(dval);
                                break;
			case 'b':
				dval = va_arg(args, int);
				if (dval == 0)
					putchar('0');
				if (dval < 0)
					putchar('-');
				for (exp = 1; dval/exp != 0; exp = exp * 2)
                			;
        			while (exp > 1)
        			{
                			exp = exp / 2;
                		if (dval / exp > 0)
                		{
                        		dval = dval - exp;
                        		putchar('1');
                		}		
                		else
                        		putchar('0');
        			}		
			case 'x':
			case 'X':
			}
		}
		else
			putchar(fmt[i]);
	}
	return (0);
}
