#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list val)
{
	char *s;
	int x, length = 0;
	int y;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < 32 || s[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			y = s[x];
			if (y < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + printf_HEX_aux(y);
		}
		else
		{
			_putchar(s[x]);
			length++;
		}
	}
	return (length);
}
