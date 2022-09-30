#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber - isNumber
 *
 * @n: n
 *
 * Return: int
 */
int isNumber(char *n) {

  int i = strlen(n);
  int isnum = (i>0);
  while (i-- && isnum) {
    if (!(n[i] >= '0' && n[i] <= '9')) {
      isnum = 0;
    }
  }
  return isnum;
}

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
		if (isNumber(argv[i]))
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
