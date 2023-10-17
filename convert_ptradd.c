#include "main.h"

/**
 * printf_pointer - print pointer.
 * @args: hello world!.
 *
 * Return: length.
 */
int printf_pointer(va_list args)
{
	void *ptr = va_arg(args, void*);

	unsigned long address = (unsigned long)ptr;

	char buffer[16];

	int length = 0;

	int i = 0, j;

	length += write(1, "0x", 2);

	do {
		int remainder = address % 16;

		if (remainder < 10)
			buffer[i++] = '0' + remainder;
		else
			buffer[i++] = 'a' + remainder - 10;

		address /= 16;
	} while (address > 0);

	for (j = i - 1; j >= 0; j--)
	{
		length += write(1, &buffer[j], 1);
	}

	return (length);
}
