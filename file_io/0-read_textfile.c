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
ssize_t reading;
char buff[INT_MAX];
file = open(filename,O_RDONLY);
if (file == -1)
return (0);
reading = read(file, buff, letters);
if (reading == -1)
return (0);

return (reading);
}
