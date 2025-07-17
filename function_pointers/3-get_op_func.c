#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as argument (e.g., "+", "-", "*", "/", "%")
 *
 * Return: Pointer to the matching operation function,
 * or exits with 99 on invalid operator.
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	/*Loop through the ops table until we find a match*/
	while (*ops[i].op != *s)
	{
		i++;

		/* If operator is not found after scanning all 5 ops*/
		/* or the input string is more than one character (e.g. "++")*/
		/* then it's an invalid operator */
		if (i > 4 || (s[1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}
	}

	/* Return the matched function pointer */
	return (ops[i].f);

}


