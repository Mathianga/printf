#include "main.h"

/**
 * printf_pointer - a function that prints an hexgecimal number.
 * @val: arguments to be pass in the function.
 * Return: counter.
 */

int printf_pointer(va_list val)
{
	void *p;
	char *string = "(nil)";
	long int a;
	int m;
	int n;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (m = 0; string[m] != '\0'; m++)
			_putchar(string[m]);
		return (m);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	n = printf_hex_aux(a);

	return (n + 2);
}
