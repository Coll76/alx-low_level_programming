#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: content to add to file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write fails, etc)
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int n;
	size_t w;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	/*Give write permissions, create file if not there, truncate if it exists*/
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
	{
		close(file);
		return (-1);
	}
	n = strlen(text_content);
	/*write to the file*/
	w = write(file, text_content, n);

	if (w != strlen(text_content))
	{
		close(file);
		return (-1);
	}
	close(file);

	return (1);
}
