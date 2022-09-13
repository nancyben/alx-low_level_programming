void _putchar(char);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
        int i;

        for ( i = 0; i <= 26; i++)
        {
		if (i < 26)
			_putchar(97 + i);
		else
			_putchar('\n')
        }
}
