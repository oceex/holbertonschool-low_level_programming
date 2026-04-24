#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
int helping(int f1, int f2, ssize_t r, ssize_t w, char *s, char *d);
/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments (file_from, file_to)
 *
 * Description:
 * This program copies the content of one file to another.
 * It uses a buffer of 1024 bytes to minimize system calls.
 * The program handles the following error conditions:
 *
 * - If the argument count is incorrect:
 *     exit code 97, print:
 *     "Usage: cp file_from file_to"
 *
 * - If file_from cannot be read:
 *     exit code 98, print:
 *     "Error: Can't read from file NAME_OF_THE_FILE"
 *
 * - If file_to cannot be created or written to:
 *     exit code 99, print:
 *     "Error: Can't write to NAME_OF_THE_FILE"
 *
 * - If a file descriptor cannot be closed:
 *     exit code 100, print:
 *     "Error: Can't close fd FD_VALUE"
 *
 * Permissions for newly created file_to:
 *     rw-rw-r-- (0664). Existing permissions are not changed.
 *
 * Return: 0 on success, otherwise exits with the codes above
 */
int main(int argc, char *argv[])
{
int f1, f2, c1, c2, i;
ssize_t w = 0, r = 0;
char buf[1024];
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
return (97);
}
f1 = open(argv[1], O_RDONLY);
if (f1 == -1)
{
dprintf(1, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
f2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (f2 == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
return (99);
}

i = helping(f1, f2, r, w, argv[1], argv[2]);
if (i != 0)
return (i);

c1 = close(f1);
c2 = close(f2);
if (c1 == -1)
{
dprintf(2, "Error: Can't close fd %d\n", f1);
return (100);
}
if (c2 == -1)
{
dprintf(2, "Error: Can't close fd %d\n", f2);
return (100);
}
return (0);
}
/**
 * helping - Performs file copy operations between two file descriptors
 * @f1: Source file descriptor to read from
 * @f2: Destination file descriptor to write to
 * @r: Number of bytes read from the source
 * @w: Number of bytes written to the destination
 * @s: Buffer used for reading data
 * @d: Buffer used for writing data
 *
 * Description: Handles the read/write process between two file descriptors,
 * checking for errors and ensuring data is transferred correctly.
 *
 * Return: 0 on success, or an error code on failure.
 */

int helping(int f1, int f2, ssize_t r, ssize_t w, char *s, char *d)
{
char buf[1024];
r = read(f1, buf, 1024);
if (r == -1)
{
dprintf(2, "Error: Can't read from file %s\n", s);
return (98);
}
while (r == 1024)
{
w = write(f2, buf, r);
if (w == -1)
{
dprintf(2, "Error: Can't write to %s\n", d);
return (99);
}
r = read(f1, buf, 1024);
if (r == -1)
{
dprintf(2, "Error: Can't read from file %s\n", s);
return (98);
}
}
w = write(f2, buf, r);
if (w == -1)
{
dprintf(2, "Error: Can't write to %s\n", d);
return (99);
}
return (0);
}
