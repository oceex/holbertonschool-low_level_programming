#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to modify
 * @to: Pointer to the string to assign
 *
 * Description: This function updates the value of a pointer-to-pointer
 * so that it points to the string provided in @to.
 */
void set_string(char **s, char *to)
{
*s = to;
}
