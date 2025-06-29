#include "main.h"

/**
 * leet - Function to encode some characters of a string
 * @str: string needs to be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char normal[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	/** loop every character in string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/** loop every elements in the array of normal */
		for (j = 0; normal[j] != '\0'; j++)
		{
			/** if the charater from string is the same with the array */
			if (str[i] == normal[j])
			{
				/** store the corresponding number to the character */
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
