#include "holberton.h"

/**
 * sighandler - funtion that handles keyboar interrupt signals
 *@sig: the signal
 */
void sighandler(int sig)
{
	int sig_command = 0;

	if (sig == SIGINT && sig_command == 0)
		simple_print_shell("\nshell$ ");
	else if (sig_command != 0)
		simple_print_shell("\n");
}
