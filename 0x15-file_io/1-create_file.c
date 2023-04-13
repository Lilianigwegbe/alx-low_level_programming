#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 if successful and -1, if it fails
 */
int create_file(const char *filename, char *text_content)
{
int fd;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
ssize_t bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
