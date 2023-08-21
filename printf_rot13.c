#include "main.h"
/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot13(va_list args)
{
	int x, y, count = 0;
	int z = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x]; x++)
	{
		z = 0;
		for (y = 0; alpha[y] && !z; y++)
		{
			if (s[x] == alpha[y])
			{
				_putchar(beta[y]);
				count++;
				z = 1;
			}
		}
		if (!z)
		{
			_putchar(s[x]);
			count++;
		}
	}
	return (count);
}
