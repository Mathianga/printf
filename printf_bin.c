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
	int i, a = 1, j;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & number);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			j = p >> (31 - i);
			_putchar(j + 48);
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
