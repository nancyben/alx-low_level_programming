void _putchar(char);
/**
 * print_last_digit - checks if a character is lowecased or not
 *
 * @c: character to check
 *
 * Return: returns 0 if lowercased otherwise return 1
 */
int print_last_digit(int c)
{
	int normalized;
	int lastDgt;

	if (c < 0)
		normalized = c * -1;
	else
		normalized = c;

	lastDgt = normalized % 10;

	_putchar(lastDgt + '0');

	return (lastDgt);
}
