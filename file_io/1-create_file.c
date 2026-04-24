#include "main.c"

int create_file(const char *filename, char *text_content)
{
int fd, i = 0;
ssize_t w;

if (filename == NULL)
return (-1);

fd = open(filename, O_TRUNC | O_CREAT, 0600);
if (fd == -1)
return (-1);
while (text_content[i] != '\0')
i++;
w = write (fd, text_content, sizeof(char)*i);
if (w == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
