void _putchar(char);

/**
 * _abs - checks if a character is lowecased or not
 *
 * @c: character to check
 *
 * Return: returns 0 if lowercased otherwise return 1
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
