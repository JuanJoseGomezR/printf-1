#ifndef holberton_h
#define holberton_h
#include <stdarg.h>
struct pter
{
    char *ptr;
    int (*ptr_int)(va_list);

};

typedef struct pter pter_l;

<<<<<<< HEAD
int _putchar(char c);
int write_c(char c);
int _printf(const char *format, ...);

=======
int _printf(const char *format, ...);
int write_c(char);
int print_c(va_list list);
int print_s(va_list list);
int print_percent(va_list list);
int print_i(va_list list);
>>>>>>> f7e4f99d1b8e03c67386f9c3ad63745b59f68418
#endif
