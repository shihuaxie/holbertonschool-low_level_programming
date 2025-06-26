#include "main.h"

/**
 * _atoi - function convert a number in the string to an integer
 * @s: string to be converted
 *
 * Return: integer from string
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1; /** to record '+' and '-', default is '+' */
	int result = 0;

	/** First, we need deal with multi signs of '-' and '+' */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = sign * 1;
		}
		i++;
	}
	/** convert numbers when meet it */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
