#include "main.h"

/**
  * _printf - a function that produces output according to a format.
  * @format: a character string composed of zero or more directives
  * Return:number of characters printed (excluding the null byte used to end
  * output to strings)
  */
int _printf(const char *format, ...)
{
	va_list ap;
	int numc;
	_printf_t gets[] = {
		{"s", print_str},
		{"c", print_char},
		{"%", print_percent},
		{"i", print_dec},
		{"d", print_dec},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	numc = get_print(format, gets, ap);
	va_end(ap);

	return (numc);
}
