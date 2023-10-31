#include "main.h"

/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, check, checkw;

	buf = malloc(letters + 1);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	check = read(fd, buf, letters);
	if (check == -1)
	{
		return (0);
	}
	buf[letters] = '\0';
	checkw = write(STDOUT_FILENO, buf, check);
	if (checkw == -1)
		return (0);
	close(fd);
	return (checkw);
}
