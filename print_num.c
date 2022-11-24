#include"main.h"

/**
  * _abs - Calculates absolute value of integer
  * @i: input
  * Return: value
*/

int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}


/**
  * count_digit - counts digits
  * @i: input integer
  * Return: digit count
  */

int count_digit(int i)
{
	unsigned int count = 0;
	unsigned int n2 = i;

	if (i == 0)
		count += 1;

	while (_abs(n2) != 0)
	{
		n2 = n2 / 10;
		count++;
	}
	return (count);
}
/**
  * integer - prints an integer
  * @i: input integer
  * Return: digit count
  */
int integer(int i)
{
	unsigned int unint;
	int count;

	if (i < 0)
	{
		_putchar('-');
		unint = -i;
		count = 1 + count_digit(i);
	}
	else
	{
		unint = i;
		count = count_digit(i);
	}

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');

	return (count);
}

/**
  * print_int - prints integer
  * @ap: va_list with number to print
  * Return: number of characters printed
  */

int print_int(va_list ap)
{
	int i = va_arg(ap, int);
	int count;

	count = integer(i);

	return (count);
}
