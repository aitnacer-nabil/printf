#include <unistd.h>

/**
 * _puts- writes the character c to stdout
 * @s: The string to print
 * @len: length of string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(char *s, int len)
{
	return (write(1, s, len));
}
