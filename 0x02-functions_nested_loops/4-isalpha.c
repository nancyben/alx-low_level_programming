void _putchar(char);

/**
 * _isalpha - checks if a character is alphabet or not
 *
 * @c: character to check
 *
 * Return: returns 0 if alphabet otherwise return 1
 */
int _isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
