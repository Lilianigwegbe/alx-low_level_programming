#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

/**
 * append_text_to_file - appends text content to a file
 * @filename: name of the file
 * @text_content: text content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, const char *text_content)
{

int fd, checkw, l = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1); /* Nothing to append, return success */
fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
if (fd == -1)
return (-1);
while (text_content[l] != 0)
l++;
checkw = write(fd, text_content, l);
if (checkw == -1)
{
close(fd);
return (1);
}
close(fd);
return (1);
}
