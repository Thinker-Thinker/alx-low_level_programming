#ifndef HEADER_H_

#define HEADER_H_

char *str_concat(char *s1, char *s2);

char *_strdup(char *str);

char *create_array(unsigned int size, char c);

char *rot13(char *);

char *leet(char *);

char *_strncpy(char *dest, char *src, int n);

char *string_toupper(char *);

void reverse_array(int *a, int n);

char *_strcat(char *dest, char *src);

int _strcmp(char *s1, char *s2);

char *cap_string(char *);

char *_strncat(char *dest, char *src, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

void puts_half(char *str);

void print_array(int *a, int n);

void rev_string(char *s);

void puts2(char *str);

void print_rev(char *s);

void _puts(char *str);

int _strlen(char *s);

void swap_int(int *a, int *b);

void reset_to_98(int *n);

int mul(int a, int b);

void print_triangle(int size);

void print_number(int n);

void print_square(int size);

void print_diagonal(int n);

void print_line(int n);

void more_numbers(void);

void print_numbers(void);

int _isdigit(int c);

void print_most_numbers(void);

int _putchar(char c);

void print_alphabet(void);

void print_alphabet_x10(void);

int _isupper(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

void print_times_table(int n);

void print_number_lower(int n);

void print_number(int n);


int wildcmp(char *s1, char *s2);

int is_palindrome(char *s);

int is_prime_number(int n);

int _sqrt_recursion(int n);

int _pow_recursion(int x, int y);

int factorial(int n);

int _strlen_recursion(char *s);

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);
char _prinnt_rev_recursion(char *s);

void set_string(char **s, char *to);

void print_diagsums(int *a, int size);

void print_chessboard(char (*a)[8]);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

unsigned int _strspn(char *s, char *accept);

char *_strchr(char *s, char c);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_memset(char *s, char b, unsigned int n);



#endif
