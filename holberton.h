#ifndef holberton_h
#define holberton_h
#include <stdarg.h>
typedef struct pter
{
    char *ptr;
    int (*ptr_int)(va_list);

} pt;


int _putchar(char c);

#endif
