#include "holberton.h"

int print_number(va_list args)
{
	int a;
	int len = 0;
	int num;
	int div;

	a = var_arg(args, int);
	if (n < 0)
	{
		len += write_c('-');
		num = n * -1;
	}
	else
		num = n;
	for(; n / div > 0 ;)
		div *= 10;
	for(; div != 0 ;)
	{
		len += write_('0' + num / div);
		num %= div;
		div /= 10;
	}
	return(len);
}	
