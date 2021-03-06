#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void print_c(va_list ap);
void print_s(va_list ap);
void print_f(va_list ap);
void print_i(va_list ap);
/**
 * struct func - print
 * @c: char
 * @f: funct
 */
typedef struct func
{
	char c;
	void (*f)(va_list ap);
} get_f;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* FUNCTION_POINTERS_H */
