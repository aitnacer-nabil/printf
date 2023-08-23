#include <stdio.h>
/**
 * str_len - a function calculate length of streng
 * @s : string
 *
 * Return: Length of streng
*/

int str_len(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		str_len("(null)");
		return (len);

	}
	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
