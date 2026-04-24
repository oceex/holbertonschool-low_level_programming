#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to STDOUT
 * @filename: Pointer to the name of the file to read
 * @letters: Number of bytes to read and print
 *
 * Return: The actual number of bytes read and printed,
 *         or 0 on failure or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t r;
int helper = 1024;
char buf[1024];
if (filename == NULL)
return (0);
file = open(filename,O_RDONLY);
if (file == -1)
return (0);
r = read(file, buf, helper);
while ((int)letters > helper)
{
buf[helper + 1] = '\0';
printf("%s", buf);
if ((int)letters > helper)
letters -= helper;
else
helper = (int)letters;
r = read(file, buf, helper);
}
buf[(int)letters + 1] = '\0';
printf("%s", buf);
close(file);
return (r);
}

