#include "main.h"



/**
 * c_specifier - a function handle C specifier
 * @c : char to print
 * Return: 1 or 0
 *
 */
int c_specifier(char c)
{
	if (c != '\0')
	{
		_putchar(c);
		return (1);
	}
	return (0);
}

/**
 * s_specifier - a this function handle S specifier
 * @s : string to print
 * Return: 1 or 0
 *
 */
int s_specifier(char *s)
{
	int len = str_len(s);

	if (len > 0)
	{
		_puts(s, len);
		return (len);
	}
	return (0);
}
