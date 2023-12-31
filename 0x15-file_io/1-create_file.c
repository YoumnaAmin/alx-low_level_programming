#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, count, check;

if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
count = 0;
if (text_content)
{
while (text_content[count] != 0)
count++;
check = write(fd, text_content, count);
if (check == -1)
return (-1);
}
close(fd);
return (1);
}
