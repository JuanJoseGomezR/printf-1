#include "holberton.h"

/**
 * print_c - Print a charater
 * @list: list of arguments
 * Return: integer
 */
int print_c(va_list list)
{
	write_c(va_arg(list, int));
	return(1);
}

/**
 * print_s - Print a string
 * @list: list of arguments
 * Return: integer
 */
int print_s(va_list list)
{
        int i;
        char *ptr;

        ptr = va_arg(list, char *);
        if (ptr == NULL)
                ptr = "(NULL)";
        for (i = 0; ptr[i] != '\0'; i++)
                write_c(ptr[i]);
        return (1);
}
/**
 * print_percent - Print a percent string
 * @list: list of arguments
 * Return: integer
 */
int print_percent(__attribute__((unused))va_list list)
{
        write_c('%');
        return (1);
}
/**
 * print_i - Print integer
 * @list: list of arguments
 * Return: integer
 */
int print_i(va_list list)
{
	int num_l;

	num_l = print_number(list);
	return (num_l);
}
/**
 * print_u - Print unsigned int
 * @list: list of arguments
 * Return: integer
 */
int print_u(va_list list)
{
	unsigned int num;
	num = va_arg(list, unsigned int);

	if (num == 0)
		return(print_unsigned_int(num));
	if (num < 1)
		return(-1);
	return(print_unsigned_int(num));
}
