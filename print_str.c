#include "main.h"

/**
  * print_str - Prints string
  * @ap: va_list arg
  * @buf: buffer size
  * Return: str count
  */

int print_str(va_list ap, char *buf)
{
	char *str;
	int count = 0;
	int i;

	buf = va_arg(ap, char *);

	if (!buf)
	{
		str = "(null)";
		return (write(1, str, 6));
	}
	str = buf;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
