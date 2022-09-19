/**
 * swap_int - swap_int
 *
 * @a: 1st input
 * @b: second input
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
