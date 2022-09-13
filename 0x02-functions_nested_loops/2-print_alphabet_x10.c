void _putchar(char);

/**
 * print_alphabet_x10 - prints alphabets a - z
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int outerLoop;
	int i;

	for (outerLoop = 0; outerLoop < 10; outerLoop++)
	{
		for (i = 0; i <= 26; i++)
		{
			_putchar(i < 26 ? 97 + i : '\n');
		}
	}
}
