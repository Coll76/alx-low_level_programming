#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *@letters: number of letters it should read and print
 *@filename: name of the file
 *Return: actual number of letters it could read and prin
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char buffer[5000];
	ssize_t number_read;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		/**_putchar("Error opening file");*/
		return (0);
	}

	number_read = read(file, buffer, letters);

	if (number_read == -1)
	{
		/**_putchar("Error reading from file");*/
		close(file);
		return (0);
	}
	/*Write buffer content to stdout*/
	write(STDOUT_FILENO, buffer, number_read);

	close(file);
	return (number_read);
}
