#include "main.h"

/**
*print_number - print_number
*
* @n: n
*
* Return: void
*
*/
void print_number(int n)
{
	int divider;

	if (n < 0)
	{
		_putchar('-');
		n = -n
	}

	if (n >= 1000)
	{
		divider = 1000;
	}
	else if (n >= 100)
	{
		divider = 100;
	}
	else if (n >= 10)
	{
		divider = 10;
	}
	else
	{
		divider = 1;
	}

	while (divider)
	{
		_putchar((n / divider) + '0');
		n = n % divider;
		divider = divider / 10;
	}

}
