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
                str = "(NULL)";
        for (i = 0; str[i] != '\0'; i++)
                write_c(str[i]);
        return (1);
}
/**
 * print_percent - Print a percent string
 * @list: list of arguments
 * Return: integer
 */
int print_percent(va_list list)
{
        write_c('%');
        return (1);
}
/**
 * print_percent - Print a percent string
 * @list: list of arguments
 * Return: integer
 */
int print_i(va_list list)
{
	int num_l;

}
