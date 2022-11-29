#include "main.h"

/**
  * print_percent - a function that identifies a percentage sign
  * @ap: list of arguments from the program
  * @buf: buffer size
  * Return: 1 on success
  */
int print_percent(va_list ap, char *buf)
{
	(void)ap;
	(void)buf;

	_putchar('%');
	return (1);
}
