#include "holberton.h"

/**
 * main- entry point to the shell
 * @argc: number of arguments
 * @argv: arguments
 * @env: environment variable
 * Return: 0 in success- Otherwise 1.
 */
int main(int argc, char **argv, char **env)
{
	(void)argc, (void)**argv;

	shell_loop(env);
	return (EXIT_SUCCESS);
}
