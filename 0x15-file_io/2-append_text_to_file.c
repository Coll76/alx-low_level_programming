#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 * @filename: name given to file
 * @text_content: text to be appended to end of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, n, w;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		close(file);
		return (-1);
	}
	n = strlen(text_content);
	w = write(file, text_content, n);

	if (w == -1 || w != n)
	{
		return (-1);
	}
	return (1);
}
