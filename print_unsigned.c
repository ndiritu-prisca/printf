#include "main.h"

/**
  * print_unsigned - a function that prints unsigned int
  * @ap: list of arguments to print from
  * Return: number of characters printed
  */
int print_unsigned(va_list ap)
{
	unsigned int n;
	int x = 1;
	int count = 0;

	n = va_arg(ap, unsigned int);

	while (n / x > 9)
		x *= 10;
	while(x != 0)
	{
		_putchar(n / x + '0');
		count++;
		n %= x;
		x %= 10;
	}
	return (count);
}
