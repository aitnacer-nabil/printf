#include "main.h"

/**
 * handle_specifiers - a function handle S C %
 * @format: specifier char
 * @ch: var arg char for c
 * @str: var arg string for s
 *
 * Return: increment
 */
int handle_specifiers(char format, int ch, char *str)
{
	char c;
	int count = 0;

	switch (format)
	{
	case 'c':
		c = ch;
		count += c_specifier(c);
		break;
	case 's':
		count += s_specifier(str);
		break;
	default:
		count += _putchar('%');
		count += _putchar(format);
		break;
	}
	return (count);
}

/**
 * _printf -  a function that produces output according to a format
 * @format: is a character string.
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int chara_print = 0;
	va_list list_of_args;

	if (format == NULL)
		return (-1);

	va_start(list_of_args, format);
	while (*format)
	{
		if (*format != '%' && *format != '\0')
		{
			chara_print += _putchar(*format);
		}
		else
		{
			format++;			/*got to next char to get  conversion specifiers */
			if (*format == '%') /*here we handle if %%*/
			{
				chara_print += _putchar(*format);
			}
			else
			{
				chara_print += handle_specifiers(*format,
												 va_arg(list_of_args, int),
												 va_arg(list_of_args, char *));
			}
		}
		format++;
	}
	va_end(list_of_args);
	return (chara_print);
}
