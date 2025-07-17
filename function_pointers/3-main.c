#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 on success, or exit with code 98, 99, or 100
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	/* the number of argv is wrong, exit with 98 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* here argv represents: ./calc int1 operator int2 -> ./calc 5+9*/
	/* argv[0] = ./calc; argv[1] = "5"; argv[2] = "+"; argv[3] = "9"*/
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* the operator is none of the 4, exit with 99 */
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* user tries to divide by 0, exit with 100 */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(a, b));
	return (0);
}
