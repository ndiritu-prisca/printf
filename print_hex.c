#include "main.h"

/**
  * hex_str - Function that converts numbers from base 10 to hexadecimal
  * @n: number for conversion
  * @alpha: Char 'A' to 'F' in lower or upper case
  * @ap: base 16 argument to be passed
  * Return: number of characters to be printed
  */

int hex_str(unsigned int n, unsigned int ap, char alpha)
{
	unsigned int x = n % ap;
	unsigned int y = n / ap;
	char c;

	if (x > 10)
		c = (x - 10) + alpha;
	else
		c = x + '0';
	if (y == 0)
	{
		return (_putchar(c));
	}
	if (y < ap)
	{
		if (y > 10)
			return (_putchar(y - 10 + alpha) + _putchar(c));
		return (_putchar(y + '0') + _putchar(c));
	}
	return (hex_str(y, ap, alpha) + _putchar(c));
}

/**
  * print_hexl - ffuction to print lower case hexadecimal
  * @ap: argument passed
  * Return: Number of characters printed
  */

int print_hexl(va_list ap)
{
	return (hex_str(va_arg(ap, unsigned int), 16, 'a'));
}

/**
  * print_HEX - Function to print upper case hexa
  * @ap: Argument passed
  * Return: Number of characters printed
*/

int print_HEX(va_list ap)
{
	return (hex_str(va_arg(ap, unsigned int), 16, 'A'));
}
