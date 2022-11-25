#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @ch: the character to print
  * Return: 1 on success, -1 on error
  */
int _putchar(char ch)
{
	static char buffer[1024];
	static int i;

	if (ch == -1 || i >= 1024)
	{
		write(1, &buffer, 1);
		i = 0;
	}
	if (ch != -1)
	{
		buffer[i] = ch;
		i++;
	}
	return (1);
}
