#ifndef holberton_h
#define holberton_h
#include <stdarg.h>
struct pter
{
    char *ptr;
    int (*ptr_int)(va_list);

};

typedef struct pter pter_l;

int _printf(const char *format, ...);
int write_c(char);
int print_c(va_list list);
int print_s(va_list list);
int print_percent(va_list list);
int print_i(va_list list);
#endif
