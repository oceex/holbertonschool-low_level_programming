#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Description:
 * Compares the strings pointed to by s1 and s2 character by character.
 * The comparison continues until a difference is found or until one of
 * the strings ends. The function returns the numerical difference between
 * the first pair of differing characters. If one string ends before the
 * other, the remaining character of the longer string determines the
 * return value.
 *
 * Return: an integer representing the difference between the first
 * differing characters of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
int n = 0, i = 0;
while (n == 0)
{
if (s1[i] == '\0')
n = -s2[i];
else if (s2[i] == '\0')
n = s1[i];
if (s1[i] - s2[i] != 0)
n = s1[i] - s2[i];
i++;
}
return (n);
}

