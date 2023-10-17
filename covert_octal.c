#include "main.h"

/**
* printf_octal - prints octal.
* @args: arguments from va_list.
* Return: characters printed number.
*/
int printf_octal(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);

	char buffer[20];

	int length = 0, i;

	do {
		buffer[length++] = '0' + (number % 8);
		number /= 8;
	} while (number > 0);

	for (i = length - 1; i >= 0; i--)
	{

		write(1, &buffer[i], 1);
	}

	return (length);
}
