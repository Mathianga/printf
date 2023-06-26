#include "main.h"
/**
 * print exclusuives string.
 * @val: arg t.
 * Return:length of the string to be return.
 */

int printf_exclusive_string(va_list val)
{
	char *s;
	int m, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] < 32 || s[m] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[m];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(cast);
		}
		else
		{
			_putchar(s[m]);
			len++;
		}
	}
	return (len);
}
