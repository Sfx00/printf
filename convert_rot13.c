#include "main.h"

/**
 * printf_rot13 - print rot13.
 * @args: hello world!.
 *
 * Return: length.
 */
int printf_rot13(va_list args)
{

	char *str = va_arg(args, char *);

	int len = 0, i, j;

	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char numbers[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char *rot13_str;

	while (str[len] != '\0')
		len++;

	rot13_str = malloc(len + 1);
	if (!rot13_str)
		return (-1);

	for (i = 0; i <= len; i++)
	{
		rot13_str[i] = str[i];
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (rot13_str[i] == letters[j])
			{
				rot13_str[i] = numbers[j];
				break;
			}
		}
	}

	write(1, rot13_str, len);

	free(rot13_str);

	return (len);
}
