#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - seltcs the correct function to perform the operatio
 * asked by the user
 *
 * @s: the operator passed as an argument
 *
 * Return: a pointer to the function corresponding to the operator
 * given s a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	/**
	 * create an array of structs containing the operators and
	 * their corresponding functons
	 */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;
	/**
	 * iterates through the array of stucts until the operator
	 * matches the one passed as an argument
	 */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	/**
	 * Return the function associated with the operator
	 */
	return (ops[i].f);
}
