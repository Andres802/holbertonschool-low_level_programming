/**
 * clear_bit - Function that changes the bit for 0 in the respctive index
 * @n: variable
 * @index: variable
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
