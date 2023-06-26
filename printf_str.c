#include "main.h"
/**
 * _strlen - a function that returns the lenght of a string.
 * @s: a pointer of character type
 * Return: n.
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != 0; n++)
		;
	return (n);

}

/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: a pointer of character type
 * Return: n
 */

int _strlenc(const char *s)
{
	int n;

	for (n = 0; s[n] != 0; n++)
		;
	return (n);
}
