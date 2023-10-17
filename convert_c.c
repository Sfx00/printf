#include "main.h"

/**
* printf_char - print character.
* @args: arguments va_list.
* Return: character printed number.
*/
int printf_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);

	return (1);
}
