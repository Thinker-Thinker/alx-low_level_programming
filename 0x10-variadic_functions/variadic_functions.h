#ifndef HEADER_H_
#define HEADER_H_

#include <stdarg.h>
/**
* struct print - print type with corresponding print function
* @t: print type
* @f: print function
*/

typedef struct print
{
char *t;
void (*f)(va_list);

} p_opt;


void print_all(const char * const format, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

int sum_them_all(const unsigned int n, ...);


#endif
