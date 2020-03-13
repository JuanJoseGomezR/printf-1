#include "holberton.h"

/**
 * _printf - Writes the C string pointed by format to the standard output
 * @format: const char
 * Return: integer
 */
int _printf(const char *format, ...);
{
	pt list[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"%", print_percent},
		{"i", print_i},
		{"b", print_b},
		{"r", print_r},
		{"R", print_R},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
	};
}
