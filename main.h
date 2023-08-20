#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

/*Helper Function*/
int _puts(char *s, int len);
int _putchar(char c);
int str_len(char *s);

/*Handle specifiers*/

int c_specifier(char c);
int s_specifier(char *s);


#endif
