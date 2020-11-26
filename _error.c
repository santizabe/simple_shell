#include "holberton.h"

/**
 * write_error - write an error when no founds a file or directory
 * @name: name of executable
 * @buffer: address of command searched to execute and no found
 * @nerrors: Number of the error
 */
void write_error(char *name, char **buffer, size_t nerrors)
{
(void)nerrors;
	write(2, name, _strlen(name));
	write(2, ": ", 2);
	write(2, *buffer, _strlen(*buffer));
	write(2, ": No such file or directory\n", 28);
}
