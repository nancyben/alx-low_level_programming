#include <unistd.h>

#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(char);
int _isalpha(char);
int print_sign(int n);
#endif
