#include "main.h"

/**
  * print_octal - function that converts to octal base
  * @ap: va_list argument passed
  * @buf: buffer size
  * Return: count
  */

int print_octal(va_list ap, char *buf)
{
	int count = 0, i;
	int *octa;
	unsigned int n = va_arg(ap, unsigned int);
	unsigned int num = n;

	(void)buf;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	octa = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		octa[i] = num % 8;
		num /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(octa[i] + '0');
	}
	free(octa);
	return (count);
}
