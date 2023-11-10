#include "shell.h"

/**
 * obikngs - prints function.
 * @memo: message to be printed
 */
void obikngs(const char *memo)
{
	write(STDOUT_FILENO, memo, strlen(memo));
}
