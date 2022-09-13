void _putchar(char);

/**
 * print_alphabet - prints alphabets a - z
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 26; i++)
	{
		_putchar(i < 26 ? 97 + i : '\n');
	}
}
