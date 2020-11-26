#include "holberton.h"

/**
 * _putchar - putchar function
 * @c: the char passed to the function
 * Return: 0 success otherwise 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * simple_print_shell - print message
 * @string: string to print
 */
void simple_print_shell(char *string)
{
        int len;

        len = _strlen(string);
        write(STDOUT_FILENO, string, len);
}
