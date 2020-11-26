#include "holberton.h"

/**
 * val_spaces - validate is buffer contains only spaces
 * @buffer: string to validate
 * Return: 0 is only spaces or 1 is contain something more
 **/

int val_spaces(char *buffer)
{
	int i = 0, nspaces = 0;
	int len = _strlen(buffer);

	while (buffer[i] != '\0')
	{
		if (buffer[i] == 32)
			nspaces++;
		i++;
	}
	if (nspaces == (len - 1))
		return (0);
	return (1);
}
