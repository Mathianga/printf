#include "main.h"

/**
 * printf_srev - a function that prints a str in reverse.
 * @args: type struct va_arg where is allocated printf arguments
 * Return: The string
 */

int printf_srev(va_list args)
{

	char *string = va_arg(args, char*);
	int i;
	int j = 0;

	if (string == NULL)
		string = "(null)";

	while (string[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
		_putchar(string[i]);

	return (j);
}
