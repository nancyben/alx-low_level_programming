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
		_putchar( i< 26 ? 97 + i: '\n');
        }
}
