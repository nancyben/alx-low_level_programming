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
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
