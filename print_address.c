#include "main.h"

/**
  * print_address - Prints address
  * @ap: va_list arg
  * @buf: buffer size
  * Return: str count
  */

int print_address(va_list ap, char *buf)
{
	unsigned int n = 0;
	unsigned long int addr, x, y = 1;
	char ch;

	addr = va_arg(ap, unsigned long int);

	if (addr == 0)
	{
		buf[n] = '0', n++;
		return (write(1, buf, n));
	}
	if (!addr)
	{
		buf = "(nil)(nil)";
		return (write(1, buf, 10));
	}
	x = addr;
	buf[n] = '0', n++, buf[n] = 'x', n++;

	while (x > 15)
	{
		y *= 16;
		x /= 16;
	}
	for (; y > 0; y /= 16)
	{
		x = (addr / y);
		if (x < 9)
			ch = x + '0';
		else
			ch = (x + 39) + '0';
		buf[n] = ch;
		n++;
		addr %= y;
	}
	return (write(1, buf, n));
}
