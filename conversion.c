#include "main.h"

/**
  * converts to string
  * @n: parameter 1
  * @base: base type
  * @y: flag if needs to be in lowercase
  * Return: pointer to char string
  */
char *conversion(unsigned long int n, int base, int y)
{
	char *hex;
	char buffer[50];
	char *p;

	hex = (y)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buffer[49];
	*p = '\0';
	while (n != 0)
	{
		*--p = hex[n % base];
		n /= base;
	}
	return (p);
}
