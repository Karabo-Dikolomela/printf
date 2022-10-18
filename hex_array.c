#include "main.h"

/**
 * hex_array - writes character to stdout
 * @bnr: array to store binary
 * @hex: array to store hexidecimal
 * @isupp: integer that determines uppercase or lowercase letter
 * @limit: size of hex
 * Return: binary array
 */
char *hex_array(char *bnr, char *hex, int isupp, int limit)
{
	int x, i, j, lett;

	hex[limit] = '\0';
	if (isupp)
		lett = 55;
	else
		lett = 87;
	for (i = (limit * 4) - 1; i >= 0; i--)
	{
		for (x = 0, j = 1; j <= 8; j *= 2, i--)
			x = ((bnr[i] - '0') * j) + x;
		i++;
		if (x < 10)
			hex[i / 4] = x + 48;
		else
			hex[i / 4] = x + lett;
	}
	return (hex);
}
