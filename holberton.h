#ifndef holberton_h
#define holberton_h
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
struct pter
{
    char *ptr;
    int (*ptr_int)(va_list);

};

typedef struct pter pter_l;

int _printf(const char *format, ...);
int write_c(char);
int print_c(va_list);
int print_s(va_list);
int print_percent(va_list);
int print_i(va_list);
int print_b(va_list);
int print_o(va_list);
int print_d(unsigned int n);
int print_number(va_list);
int print_unsigned_int(va_list);
<<<<<<< HEAD
int print_unsigned_number(unsigned int n);
=======
>>>>>>> 67a29d36ba656731cf730747e0157e0cbe19c490
int validate(const char *format, pter_l f_list[], va_list arg_list);
#endif
