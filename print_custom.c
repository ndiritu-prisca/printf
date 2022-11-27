#include "main.h"

/**
  * print_s - Function to print string of non printable characters
  * @ap: va_list argument to be passed
  * @buf: buffer size
  *Return: number of characters printed
 */

int print_S(va_list ap, char *buf)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(ap, char *);

	(void)buf;

	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = conversion(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
