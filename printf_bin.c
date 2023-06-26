#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments to be pass.
 * Return: 1.
 */

int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int m, a = 1, n;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int p;

	for (m = 0; m < 32; m++)
	{
		p = ((a << (31 - m)) & number);
		if (p >> (31 - m))
			flag = 1;
		if (flag)
		{
			n = p >> (31 - m);
			_putchar(n + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
