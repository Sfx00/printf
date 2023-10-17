#include "main.h"

/**
 * printf_binary - print binary.
 * @args: hello world!.
 *
 * Return: length.
 */
int printf_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	char buffer[32];

	int len = 0, index = 0;

	int i;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num > 0)
	{
		buffer[index++] = (num % 2) + '0';
		num /= 2;
	}

	for (i = index - 1; i >= 0; i--)
	{
		write(1, &buffer[i], 1);
		len++;
	}

	return (len);
}
