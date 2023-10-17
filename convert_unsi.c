#include "main.h"

/**
* printf_unsigned - print unsigned integer.
* @args: va_list argument.
* Return: character printed number.
*/
int printf_unsigned(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);

	char buffer[20];

	int length = 0;

	int i;

	do {
		buffer[length++] = '0' + (number % 10);
		number /= 10;
	} while (number > 0);

	for (i = length - 1; i >= 0; i--)
	{
		write(1, &buffer[i], 1);
	}

	return (length);
}
