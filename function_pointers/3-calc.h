#ifndef _3_CALC_H
#define _3_CALC_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
/**
 * op_add - Returns the sum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a + b
 */
int op_add(int a, int b);
/**
 * op_sub - Returns the difference of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a - b
 */
int op_sub(int a, int b);
/**
 * op_mul - Returns the product of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a * b
 */
int op_mul(int a, int b);
/**
 * op_div - Returns the quotient of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a / b
 */
int op_div(int a, int b);
/**
 * op_mod - Returns the remainder of the division of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a % b
 */
int op_mod(int a, int b);
/**
 * get_op_func - Selects the correct function to perform an operation
 * @s: The operator passed as argument
 *
 * Return: A pointer to the function that corresponds to the operator,
 *         or NULL if the operator is invalid
 */
int (*get_op_func(char *s))(int, int);
#endif
