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
    ssize_t r, w;
    char *buf;

    if (filename == NULL)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
    {
        close(file);
        return (0);
    }

    r = read(file, buf, letters);
    if (r == -1)
    {
        free(buf);
        close(file);
        return (0);
    }

w = write(STDOUT_FILENO, buf, r);

free(buf);
close(file);

if (w == -1 || w != r)
return (0);

return (w);
}

