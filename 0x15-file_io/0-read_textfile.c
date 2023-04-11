#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: 0, if the file can not be opened or read
 * or if the filename is null.
 * or if write fails or does not write the expected amount of bytes
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int op, scan;
char *buff;
if (!filename)
return (0);
buff = malloc(sizeof(char) * letters);
if (!buff)
return (0);
op = open(filename, O_RDONLY);
if (op == -1) 
{
free(buff);
return (0);
}
scan = read(op, buff, letters);
if (scan == -1) {
free(buff);
close(op);
return (0);
}
write(STDOUT_FILENO, buff, scan);
free(buff);
close(op);
return (scan);
}

