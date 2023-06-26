#include "main.h"

/**
 * printf_string - a function that prints a string.
 * @val: arguments to be passed
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *string;
	int i, length;

	string = va_arg(val, char *);
	if (string == NULL)
	{
		string = "(null)";
		length = _strlen(string);
		for (i = 0; i < length; i++)
			_putchar(string[i]);
		return (length);
	}
	else
	{
		length = _strlen(string);
		for (i = 0; i < length; i++)
			_putchar(string[i]);
		return (length);
	}
}
