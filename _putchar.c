#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @ch: the character to print
  * Return: 1 on success, -1 on error
  */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
