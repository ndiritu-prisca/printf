#include "main.h"

/**
  * print_dec - Returns int to signed decimal
  * @ap: va_list arguments passedd
  * Return: length of integers
  */

int print_dec(va_list ap)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(ap, int);
	div = 1;
	len = 0;
	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}
	for (; num / div > 9;)
	{
		div *= 10;
	}
	for (; div != 0;)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
	return (len);
}
