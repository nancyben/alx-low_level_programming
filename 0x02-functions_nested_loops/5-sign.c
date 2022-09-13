void _putchar(char);

/**
 * print_sign - checks if a character is lowecased or not
 *
 * @n: character to check
 *
 * Return: returns 0 if lowercased otherwise return 1
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
