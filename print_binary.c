#include "main.h"

/**
  * print_binary - a function that converts unsigned int to binary
  * @ap: list of arguments
  * @buf: buffer size
  * Return: number of characters
  */
int print_binary(va_list ap, char *buf)
{
	int numc = 0, x;
	int *p;
	unsigned int i = va_arg(ap, unsigned int);
	unsigned int tmp = i;

	(void)buf;

	while (i / 2 != 0)
	{
		i /= 2;
		numc++;
	}
	numc++;
	p = malloc(numc * sizeof(*p));
	if (p == NULL)
	{
		free(p);
		return (0);
	}
	for (x = 0; x < numc; x++)
	{
		p[x] = tmp % 2;
		tmp /= 2;
	}
	for (x = numc - 1; x >= 0; x--)
	{
		_putchar(p[x] + '0');
	}
	free(p);
	return (numc);
}
