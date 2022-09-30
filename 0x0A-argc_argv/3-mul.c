#include <stdio.h>

#include <string.h>
#include <stdlib.h>
/**
 * main - prints number of arguments
 *
 * @argc: argument count
 *
 * @argv: array of strings containing arguments
 *
 * Return: 0 to indicate success
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
