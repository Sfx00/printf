#include "main.h"

/**
* printf_string - prints string.
* @args: arguments from va_list.
* Return: characters printed number.
*/
int printf_string(va_list args)
{
	char *s = va_arg(args, char *);

	int len = 0;

	if (s == NULL)
		s = "(null)";

	while (s[len] != '\0')
		len++;

	write(1, s, len);

	return (len);
}

/**
* printf_upper_hexadecimal_char - printf upper hexadecimal char.
* @c: char.
* Return: characters printed number.
*/
int printf_upper_hexadecimal_char(char c)
{

	char buffer[2];
	int length = 0, i;

	for (i = 1; i >= 0; i--)
	{
		int remainder = c % 16;

		if (remainder < 10)
			buffer[i] = '0' + remainder;
		else
			buffer[i] = 'A' + remainder - 10;
		c /= 16;
	}

	length = write(1, buffer, 2);

	return (length);
}

/**
* printf_S - prints string.
* @args: arguments from va_list.
* Return: characters printed number.
*/
int printf_S(va_list args)
{
	char *string = va_arg(args, char*);

	int length = 0, i;

	for (i = 0; string[i] != '\0'; i++)

	{
		if (string[i] < 32 || string[i] >= 127)
		{
			length += write(1, "\\x", 2);
			length += printf_upper_hexadecimal_char(string[i]);
		}
		else
		{
			length += write(1, &string[i], 1);
		}
	}

	return (length);
}
