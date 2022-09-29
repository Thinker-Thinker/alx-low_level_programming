#ifndef HEADER_H_

#define HEADER_H_

int _strlen_recursion(char *s);

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);

void set_string(char **s, char *to);

void print_diagsums(int *a, int size);

void print_chessboard(char (*a)[8]);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

unsigned int _strspn(char *s, char *accept);

char *_strchr(char *s, char c);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_memset(char *s, char b, unsigned int n);

int _putchar(char c);



#endif
