#include "main.h"

/**
 * rev_string - Function to reverse a string.
 * @s: string to be reversed
 *
 * Return: void.
 */

void rev_string(char *s)
{
/** declare a pointer start, it points to the string's start position - s[0] */
	char *start = s;
/** declare a pointer named end, points to the start of the string - 'M' */
	char *end = s;
	char tmp;
/** First, make the end to be the last char */
	while (*end != 0)
	{
		end++;
	}
	end--; /** end will pointed to the last cahr which is 'l' */

/** start swapping */
	while (start < end)
	{
/** swap the char */
	tmp = *start;
	*start = *end;
	*end = tmp;
/** move the pointers */
	start++;
	end--;
	}
}
