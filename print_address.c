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
	unsigned long int addr, y, z = 1;
	char ch;

	addr = va_arg(ap, unsigned long int);

	if (!addr)
	{
		buf = "(nil)";
		return (write(1, buf, 5);
	}
	y = addr;
	buf[n] = '0', n++, buf[n] = 'x', n++;

	while (y > 15)
	{
		z *= 16;
		y /= 16;
	}
	for (; z > 0; z /= 16)
	{
		y = (addr / z);
		if (y < 9)
			ch = y + '0';
		else
			ch = (y + 39) + '0';
		buf[n] = ch;
		n++;
		addr %= z;
	}
	return (write(1, buf, n));
}
