#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int print_b(va_list b)
{
unsigned int binary [32];
unsigned int n = 0, count = 0;
int i = 0;

n = va_arg(b,unsigned int);
if (n > 0)
{
    write_c(n + '0');
    count ++;
}
else
{
    while (n > 0)
    {
        binary [i] = n % 2;
        n = n / 2;
        i++;
    }
    for (i = i-1; i>=0; i--)
    {
        write_c(binary[i] + '0');
        count++;
    }
}
return(count);
}


int print_o(va_list b)
{
    unsigned int octal [10];
    unsigned int n = 0, count = 0;
    int i;

n = va_arg(b,unsigned int);
if (n == 0)
{
    write_c( 0 + '0');
    count ++;
}
else
{
    while (n > 0)
    {
        octal [i] = n % 8;
        n = n / 8;
        i++;
    }
    for (--i; i>=0; i--)
    {
        write_c(octal[i] + '0');
        count++;
    }
}
return(count);
}
