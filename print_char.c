#include "main.h"

/**
  * print_char - a function that identifies a character
  * @ap: list of arguments from the program
  * Return: 1 on successs
  */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
