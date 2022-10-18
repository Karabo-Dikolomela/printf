#include "main.h"

/**
 * oct_array - writes the character c to stdout
 * @bnr: array to store binary
 * @oct: array to store octal
 * Return: binary array
 */

char *oct_array(char *bnr, char *oct)
{
	int x, i, j, y, limit;

	oct[11] = '\0';
	for (i = 32, y = 10; i >= 0; i--, y--)
	{
		if (i > 1)
			limit = 4;
		else
			limit = 2;
		for (x = 0, j = 1; j < limit; j *= 2, i--)
			x = ((bnr[i] - '0') * j) + x;
		i++;
		oct[y] = x + '0';
	}
	return (oct);
}
