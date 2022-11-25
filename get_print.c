#include "main.h"

/**
  * get_print - a function that prints a formatted string
  * @format: a character string composed of zero or more directives
  * @gets: array of functions
  * @ap: list of arguments passed to the the program
  * Return: number of characters printed.
  */
int get_print(const char *format, _printf_t gets[], va_list ap)
{
	int x, y, n, sum_char = 0;

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; gets[y].i != NULL; y++)
			{
				if (format[x + 1] == gets[y].i[0])
				{
					n = gets[y].f(ap);
					if (n == -1)
						return (-1);
					sum_char += n;
					break;
				}
			}
			if (gets[y].i == NULL && (format[x + 1]) != ' ')
			{
				if (format[x + 1] != '\0')
				{
					_putchar(format[x]);
					_putchar(format[x + 1]);
					sum_char += 2;
				}
				else
				{
					sum_char = 0;
					return (-1);
				}
			}
			x = x + 1;
		}
		else
		{
			_putchar(format[x]);
			sum_char++;
		}
	}
	return (sum_char);
}
