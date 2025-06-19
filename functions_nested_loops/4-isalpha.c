#include "main.h"

/**
 * _isalpha - function to evaluate if the input c is a alphabet
 *
 * @c: the character to check
 *
 *  Return: 1 if lowercase; 0 if uppercase.
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
