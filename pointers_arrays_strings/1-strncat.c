#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy from src
 *
 * Description:
 * Appends at most n characters from the string pointed to by src
 * to the end of the string pointed to by dest. The terminating
 * null byte of dest is not overwritten unless n is greater than
 * the length of src. A null byte is added only if src has fewer
 * than n characters.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
i++;
while ((n != 0) && (src[j] != '\0'))
{
dest[i + j] = src[j];
n--;
j++;
}
dest[i + j] = '\0';
return (dest);
}
