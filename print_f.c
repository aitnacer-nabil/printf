#include "main.h"

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
		} else
		{
			format++;/*got to next char to get  conversion specifiers */
			if (*format == '%')/*here we handle if %%*/
			{
				chara_print += _putchar(*format);
			} else
			{
				char c;

				switch (*format)
				{
				case 'c':
					c = va_arg(list_of_args, int);

					chara_print += c_specifier(c);
					break;
				case 's':
					chara_print += s_specifier(va_arg(list_of_args, char*));
					break;
				}
			}
		}
		format++;
	}
	va_end(list_of_args);
	return (chara_print);

}
