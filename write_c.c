#include "holberton.h"

/**
 * write_c - Function that writes the character c
 * @c: char
 * Return: integer
 */
int write_c(char c)
{
	return (write(1, &c, 1));
}
