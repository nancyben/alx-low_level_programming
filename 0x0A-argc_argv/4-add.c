#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print sums of numbers
 *
 * @argc: argument count
 *
 * @argv: array of strings containing arguments
 *
 * Return: 0 to indicate success
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	for (; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
