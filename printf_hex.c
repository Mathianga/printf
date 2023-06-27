#include "main.h"

/**
 * printf_hex - a function that prints an hexgecimal number.
 * @val: arguments.
 * Return: count.
 */

int printf_hex(va_list val)
{
	int i;
	int *array;
	int count = 0;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int temp = number;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}

	free(array);

	return (count);
}
