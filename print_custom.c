#include "main.h"

/**
  * converter - prints hexadecimal value of custom characters
  * @asc: ascii value of number
  * Return: number of characters printed
  */
int converter(int asc)
{
	char slash = '\\';
	char ch = 'x';
	unsigned int n, digit = 1, a;
	char lett, b = '0';
	int count = 0;

	n = asc;
	a = n;

	while (a > 15)
	{
		digit *= 16;
		a /= 16;
	}
	count += write(1, &slash, 1);
	count += write(1, &ch, 1);

	for (; digit > 0; digit /= 16)
	{
		a = (n / digit);
		if (a > 9)
			lett = (((n / digit) + 7) + '0');
		else
			lett = (n / digit) + '0';
		if (digit == 1 && count == 2)
			count += write(1, &b, 1);
		count += write(1, &lett, 1);
		n %= digit;
	}
	return (count);
}

/**
  * print_S - Function to print string of non printable characters
  * @ap: va_list argument to be passed
  * @buf: buffer size
  *Return: number of characters printed
 */

int print_S(va_list ap, char *buf)
{
	int i, count = 0;
	char lett;
	char *s;

	buf = va_arg(ap, char *);
	if (!buf)
	{
		s = "(null)";
		return (write(1, s, 6));
	}

	s = buf;
	for (i = 0; s[i] != '\0'; s++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
			count += converter(s[i]);
		else
		{
			lett = s[i];
			count += write(1, &lett, 1);
		}
	}
	return (count);
}
