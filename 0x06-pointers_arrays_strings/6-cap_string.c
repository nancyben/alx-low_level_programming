/**
 * cap_string - cap_string
 *
 * @str: str
 *
 * Return: *
 *
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			*(str) = str[i] - 32;
		}
		else if ((str[i] >= 97 && str[i] <= 122)  && !((str[i - 1] >= 97 && str[i - 1] <= 122) || (str[i - 1] >= 65 && str[i - 1] <= 90)))
		{
			*(str + i) = str[i] - 32;
		}

		i++;
	}

	return (str);
}
