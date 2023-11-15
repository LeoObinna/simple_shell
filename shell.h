#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void);
void obikngs(const char *memo);
void _leomous(void);
void perform_format(const char *format, char *const argv[], char *const envp[]);
void interpret_format(char *format, size_t size);

#endif
