#include "main.h"

/**
* printf_revstr - print reversed string.
* @args: hello world!.
*
* Return: length.
*/
int printf_revstr(va_list args)
{
	char *str = va_arg(args, char *);

	int len = 0, i, j = 0;

	char *rev_str;

	while (str[len] != '\0')
		len++;

	rev_str = malloc(len + 1);
	if (!rev_str)
		return (-1);

	for (i = len - 1; i >= 0; i--)
		rev_str[j++] = str[i];

	rev_str[j] = '\0';
	write(1, rev_str, j);

	free(rev_str);

	return (j);
}
