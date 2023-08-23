#include "main.h"
/**
 * handle_print - Prints arguments depending with its type
 * @fomt: Formats string in which to print arguments.
 * @list: List of arguments to be printed.
 * @ind: ind.
 * @buffer: Buffer array print handler
 * @flags: Active flags calculator
 * @width: get width.
 * @precision: Precision specifier
 * @size: Size specifier
 * Return: 1 or 2;
 */
int handle_print(const char *fomt, int *ind, va_list list, char buffer[],
       int flags, int width, int precision, int size)
{
        int i, unknown_len = 0, printed_chars = -1;
        fomt_t fomt_types[] = {
                {'c', print_char}, {'s', print_string}, {'%', print_percent},
                {'i', print_int}, {'d', print_int}, {'b', print_binary},
                {'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
                {'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
                {'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
        };
        for (i = 0; fomt_types[i].fomt != '\0'; i++)
                if (fomt[*ind] == fomt_types[i].fomt)
                        return (fomt_types[i].fmt(list, buffer, flags, width, precision, size));
        if (fpmt_types[i].fomt == '\0')
        {
                if (fomt[*ind] == '\0')
                        return (-1);
                unknown_len += write(1, "%%", 1);
                if (fomt[*ind - 1] == ' ')
                        unknow_len += write(1, " ", 1);
                else if (width)
                {
                        --(*ind);
                        while (fomy[*ind] != ' ' && fomt[*ind] != '%')
                                --(*ind);
                        if (fomt[*ind] == ' ')
                                --(*ind);
                        return (1);
                }
                unknow_len += write(1, &fomt[*ind], 1);
                return (unknow_len);
        }
        return (printed_chars);
}


