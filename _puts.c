#include "main.h"

/**
  * _puts - prints a string on new line to stout
  * @str: input string
  * Return: count of string
  */

int _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
