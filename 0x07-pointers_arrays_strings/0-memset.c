/**
 *
 *_memset - _memset
 *
 *@s: s
 *@b: b
 *@n:n
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}