#include "main.h"

/**
 * short_oct_array - calculates short octal number
 * @bnr: array to binary
 * @oct: array to store octal
 * Return: binary array
 */

char short_oct_array(char *bnr, char *oct)
{
	int x, i, j, y, limit;

	oct[6] = '\0';
	for (i = 15, y = 5; i >= 0; i--, y--)
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
