#include "main.h"

/**
 * long_oct_array - calculates a long octal value
 * @bnr: array to store binary
 * @oct: array to store octal
 * Return: binary array.
 */

char *long_oct_array(char *bnr, char oct)
{
	int x, i, j, y, limit;

	oct[22] = '\0';
	for (i = 63, y = 21; i >= 0; i--, y--)
	{
		if (i > 0)
			limit = 4;
		else
			limit = 1;
		for (x = 0, j = 1; j <= limit; j *= 2, i--)
			x = ((bnr[i] - '0') * j) + x;
		i++;
		oct[y] = x + '0';
	}
	return (oct);
}
