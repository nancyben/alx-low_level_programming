/**
 * _strlen - swap_int
 *
 * @s: 1st input
 *
 * Return: void
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
