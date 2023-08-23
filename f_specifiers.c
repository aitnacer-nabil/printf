#include "main.h"



/**
 * c_specifier - a function handle C specifier
 * @c : char to print
 * Return: 1 or 0
 *
 */
int c_specifier(char c)
{
	if (c >= 32 && c <= 126)
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
	int i = 0;
	int count = 0;

	if (s == NULL)
	{
		s_specifier("(null)");
		return count;
	}
	while (s[i])
	{
		_putchar(s[i]);
		i++;
		count++;
	}
	return (count);
}
