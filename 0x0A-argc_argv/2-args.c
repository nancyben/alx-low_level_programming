#include <stdio.h>

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
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
