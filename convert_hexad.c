#include "main.h"

/**
 * printf_hexadecimal - print hexadecimal.
 * @args: hello world!.
 *
 * Return: length.
 */
int printf_hexadecimal(va_list args)
{

	unsigned int number = va_arg(args, unsigned int);

	char buffer[20];

	int length = 0, i;

	do {
		int remainder = number % 16;

		if (remainder < 10)
			buffer[length++] = '0' + remainder;
		else
			buffer[length++] = 'a' + remainder - 10;
		number /= 16;
	} while (number > 0);

	for (i = length - 1; i >= 0; i--)
	{

		write(1, &buffer[i], 1);
	}

	return (length);
}

/**
 * printf_upper_hexadecimal - print upper hexadecimal.
 * @args: hello world!.
 *
 * Return: length.
 */
int printf_upper_hexadecimal(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);

	char buffer[20];

	int length = 0, i;

	do {
		int remainder = number % 16;

		if (remainder < 10)
			buffer[length++] = '0' + remainder;
		else
			buffer[length++] = 'A' + remainder - 10;
		number /= 16;
	} while (number > 0);

	for (i = length - 1; i >= 0; i--)
	{

		write(1, &buffer[i], 1);
	}

	return (length);
}


