#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: frist string
 * @s2: second string
 *
 * Return: the result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result; /** store the comparing value to result */

	/** Compare 2 strings from start */
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		/** If 2 char is different, calulate the difference, and return */
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	/** Otherwise,return 0 if it's teh same */
	return (0);
}
