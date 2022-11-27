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
	char *buf;

	_printf_t gets[] = {
		{"s", print_str},
		{"c", print_char},
		{"%", print_percent},
		{"i", print_dec},
		{"d", print_dec},
		{"u", print_unsigned},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hexl},
		{"X", print_HEX},
		{"S", print_S},
		{"p", print_address},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	
	buf = malloc(1024 * sizeof(char));
	if (buf == NULL)
	{
		va_end(ap);
		return (-1);
	}
	numc = get_print(format, gets, ap, buf);
	va_end(ap);
	free(buf);

	return (numc);
}
