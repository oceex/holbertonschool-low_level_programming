#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Description:
 * Compares the first characters of the strings pointed to by s1 and s2.
 * The function returns the difference between the ASCII values of the
 * first characters. This is a simplified comparison and does not check
 * the full string like the standard strcmp function.
 *
 * Return: an integer representing s1[0] - s2[0]
 */
int _strcmp(char *s1, char *s2)
{
return (s1[0] - s2[0]);
}

