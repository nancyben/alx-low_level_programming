/**
 * _pow_recursion - _pow_recursion
 *
 * @x: x
 * @y: y
 *
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
