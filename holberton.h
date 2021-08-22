#ifndef _PRINTF
#define _PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
/**
  * struct specifiers - Struct specifiers
  * @specifier: The conversion specifier
  * @f: The function pointer
  */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spc_dt;
int _putchar(char c);
int _write(char c);
int _printf(const char *format, ...);
int _print_a_char(va_list args);
int _print_a_string(va_list args);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _print_a_integer(va_list args);
void _recursion_integer(int a);
int _print_int_binary(va_list args);
void _recursion_int_binary(int a);
int _validate_char(char _type);
int _print_unsigned(va_list args);
void printstr(char *str);
int num_len(unsigned int num);
char *tostring(char st[], long int num, int length);
int _print_binary(va_list num);
int _pow_recursion(int x, int y);
int _print_octal(va_list args);
#endif/* _PRINTF */
