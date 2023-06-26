#include "main.h"

/**
 * printf_string - a function that prints a string.
 * @val: arguments to be passed
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *string;
	int m, length;

	string = va_arg(val, char *);
	if (string == NULL)
	{
		string = "(null)";
		length = _strlen(string);
		for (m = 0; m < length; m++)
			_putchar(string[m]);
		return (length);
	}
	else
	{
		length = _strlen(string);
		for (m = 0; m < length; m++)
			_putchar(string[m]);
		return (length);
	}
}
