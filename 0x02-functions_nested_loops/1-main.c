#include "main.h"

void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	int i;

	for ( i = 0; i <= 27; i++)
	{
		_putchar(97 + i);
	}
	_putchar('\n');
}
