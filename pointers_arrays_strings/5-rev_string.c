# include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 *
 * Description: swaps characters from both ends of the string
 * until the middle is reached.
 */
void rev_string(char *s)
{
int i = -1;
int tmp, st = 0;
while (s[i + 1] != '\0')
i++;
while (st < i)
{
tmp = s[st];
s[st++] = s[i];
s[i--] = tmp;
}
}

