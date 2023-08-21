#include "main.h"

/**
 * printf_oct - prints an octal number.
 * @val: arguments.
 * Return: count.
 */
int printf_oct(va_list val)
{
	int x;
	int *array;
	int count = 0;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int temporal = number;

	while (number / 8 != 0)
	{
		number /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		array[x] = temporal % 8;
		temporal /= 8;
	}
	for (x = count - 1; x >= 0; x--)
	{
		_putchar(array[x] + '0');
	}
	free(array);
	return (count);
}
