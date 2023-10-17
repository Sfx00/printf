#include "main.h"

/**
 * printf_integer - print integer.
 * @args: hello world!.
 *
 * Return: length.
 */
int printf_integer(va_list args)
{
	char buffer[20];

	int num = va_arg(args, int);

	int len = 0, index = 0, i = 0;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		len++;
	}

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num > 0)
	{
		buffer[index++] = (num % 10) + '0';
		num /= 10;
	}

	for (i = index - 1; i >= 0; i--)
	{
		write(1, &buffer[i], 1);
		len++;
	}

	return (len);
}
