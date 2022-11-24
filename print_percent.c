#include "main.h"

/**
  * print_percent - a function that identifies a percentage sign
  * @ap: list of arguments from the program
  * Return: 1 on success
  */
int print_percent(va_list ap)
{
	(void)ap;

	_putchar('%');
	return (1);
}
