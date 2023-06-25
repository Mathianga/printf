#include "main.h"
/**
 * _putchar - writes a char c to stdout
 * @c: The char to print
 *
 * Return: 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
