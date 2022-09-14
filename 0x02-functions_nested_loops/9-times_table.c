#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 * Return: returns 0 if lowercased otherwise return 1
 */
void times_table(void)
{
	int leftTimes;
	int rightTimes;

	for (leftTimes = 0; leftTimes <= 9; leftTimes++)
	{
		int result;

		for (rightTimes = 0; rightTimes <= 9; rightTimes++)
		{
			result = leftTimes * rightTimes;
			if (result > 9)
				_putchar((result / 10) + '0');
			else if (rightTimes > 0)
				_putchar(' ');
			_putchar((result % 10) + '0');
			if (rightTimes < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
