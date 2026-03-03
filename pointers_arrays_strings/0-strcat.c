# include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Description:
 * Appends the string pointed to by src to the end of the string
 * pointed to by dest. The terminating null byte of dest is replaced,
 * and a new null byte is added at the end of the result.
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
i++
for (; src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = src[j];
return (dest);
}
