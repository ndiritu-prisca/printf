#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
  * struct printf_control- This is a typedef struct
  * @i: Pointer type char.
  * @f: Pointer to call the function.
  */

typedef struct printf_control
{
	char *i;
	int (*f)(va_list, char *);
} _printf_t;
int get_print(const char *format, _printf_t gets[], va_list ap, char *buf);
int print_int(va_list ap, char *buf);
int _putchar(char ch);
int _puts(char *str);
int print_dec(va_list ap, char *buf);
int print_str(va_list ap, char *buf);
int print_char(va_list ap, char *buf);
int print_percent(va_list ap, char *buf);
int count_digit(int i);
int _abs(int i);
int integer(int i);
int print_binary(va_list ap, char *buf);
int print_unsigned(va_list ap, char *buf);
int print_octal(va_list ap, char *buf);
int hex_str(unsigned int n, unsigned int ap, char alpha);
int print_hexl(va_list ap, char *buf);
int print_HEX(va_list ap, char *buf);
int print_S(va_list ap, char *buf);
char *conversion(unsigned long int n, int base, int y);
int print_address(va_list ap, char *buf);
#endif
