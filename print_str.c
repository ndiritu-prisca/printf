#include "main.h"

/**
  * print_str - Prints string
  * @ap: va_list arg
  * Return: str count
  */

int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count = 0;
	int i;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
