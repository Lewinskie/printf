#include "main.h"
/**
 * is_printable - Checks if a char is printable
 * @c: To be evaluated char
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
        if (c >= 32 && c < 127)
                return (1);
        return (0);
}
/**
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: Chars of array
 * @ i: point  at which index should start appending
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */
int apend_hexa_code(char ascii_code, char buffer[], int i)
{
        char map_to[] = "0123456789ABCDEF";
        /* The hexa format code is always 2 digits long */
        if (ascii_code < 0)
                ascii_code *= -1;
        buffer[i++] = '\\';
        buffer[i++] = 'x';
        buffer[i++] = map_to[ascii_code / 16];
        buffer[i] = map_to[ascii_code % 16];
        return (3);
}
/**
 * is_digit - Verifies whether char is a digit
 * @c: To be evaluated char
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
        if (c >= '0' && c <= '9')
                return (1);
        return (0);
}
/**
 * convert_size_number - Gives a number to the specified size
 * @num: To be casted number
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
        if (size == S_LONG)
                return (num);
        else if (size == S_SHORT)
                return ((short)num);
        return ((int)num);
}
/**
 * convert_size_unsgnd - Gives a number to the specified size
 * @num: To be casted number
 * @size: To  be casted number indicator
 *
 * Return: Value of number casted
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
        if (size == S_LONG)
                return (num);
        else if (size == S_SHORT)
                return ((unsigned short)num);
        return ((unsigned int)num);
}

