#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to append to end of file
 *
 * Return: Returns: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, count, check;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
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