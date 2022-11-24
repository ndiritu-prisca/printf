#include "main.h"

/**
  * print_str - Prints string
  * @ap: va_list arg
  * Return: str count
  */

int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count;
	(void)f;

	if (str == NULL)
		str = "(null)";
	count = _puts(str);
	return (count);
}
