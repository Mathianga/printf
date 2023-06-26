#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string.
 * @s: a pointer of character type
 * Return: j.
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != 0; j++)
		;
	return (j);

}

/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: a pointer of character type
 * Return: j
 */

int _strlenc(const char *s)
{
	int j;

	for (j = 0; s[j] != 0; j++)
		;
	return (j);
}
