#include "main.h"

/**
* print_normal - prints octal.
* @format: hello world.
* @i: hello world!.
* @len: characters printed number.
*/
void print_normal(const char *format, int *i, int *len)
{
	write(1, &format[*i], 1);
	(*len)++;
	(*i)++;
}
