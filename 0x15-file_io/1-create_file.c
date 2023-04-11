#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of the file to be created
 * @text: a NULL terminated string to write to the file
 *
 * Return: 1 if successful and -1, if it fails
 */

int create_file(const char *filename, char *text)
{
int fd, check_write, len = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)    
return (-1);
if (text != NULL)  
{
while (text[len] != '\0')
len++;
check_write = write(fd, text, len);
if (check_write == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
