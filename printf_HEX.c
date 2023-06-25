#include "main.h"
/**
 * printf_HEX - This is a program that  prints a hexadecimal numbers.
 * @val:an arguments.
 * Return: should  returns a counter.
 */
int printf_HEX(va_list val)
{
	int m;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (m = 0; m < counter; m++)
	{
		array[m] = temp % 16;
		temp /= 16;
	}
	for (m = counter - 1; m >= 0; m--)
	{
		if (array[m] > 9)
			array[m] = array[m] + 7;
		_putchar(array[m] + '0');
	}
	free(array);
	return (counter);
}
