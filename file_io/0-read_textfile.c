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
ssize_t reading, w;
char *buf;
file = open(filename,O_RDONLY);
if (file == -1)
return (0);
buf = malloc(letters);
if (buf == NULL)
{
close(file);
return (0);
}
reading = read(file, buf, letters);
if (reading == -1)
{
close(file);
free(buf);
return (0);
}
w = write(1, buf, reading);
if (w == -1 || w != reading)
{
free(buf);
close(file);
return (0);
}

free(buf);
close(file);
return (reading);
}
