#include "main.h"

/**
  * print_char - a function that identifies a character
  * @ap: list of arguments from the program
  * Return: 1 on successs
  */
int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	while (c != '\0')
	{
		_putchar(c);
		break;
	}
	return (1);
}
