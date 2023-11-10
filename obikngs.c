#include "shell.h"

/**
 * obikngs - prints function.
 * @memo: message to be printed
 * @strlen: length of a string
 */
void obikngs(const char *memo)
{
	write(STDOUT_FILENO, memo, strlen(memo));
}
