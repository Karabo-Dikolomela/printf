#include "main.h"

/**
 * binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @inp: input number
 * @isneg: if input number is negetive
 * @limit: size of the binary
 * Return: number of characters printed.
 */
char *binary_array(char *binary, long int inp, int isneg, int limit)
{
	int x;

	for (x = 0; x < limit; x++)
		binary[x] = '0';
	binary[limit] = '\0';
	for (x = limit - 1; inp > 1; x--)
	{
		if (inp == 2)
			binary[x] = '0';
		else
			binary[x] = (inp % 2) + '0';
		inp /= 2;
	}
	if (inp != 0)
		binary[x] = '1';
	if (isneg)
	{
		for (x = 0; binary[x]; x++)
			if (binary[x] == '0')
				binary[x] = '1';
			else
				binary[x] = '0';
	}

	return (binary);
}
