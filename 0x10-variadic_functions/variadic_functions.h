#ifndef HEADER_H_

#define HEADER_H_


void print_numbers(const char *separator, const unsigned int n, ...);

int sum_them_all(const unsigned int n, ...);

void print_name(char *name, void (*f)(char *));

char *_memset(char *s, char b, unsigned int n);



#endif
