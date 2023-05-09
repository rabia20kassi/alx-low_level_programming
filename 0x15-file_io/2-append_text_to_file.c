#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: name of file to write into.
 * @text_content: text to append to file
 *
 * Return: 1 (SUCCESS), else -1 (FAILURE)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, i;

	fd = err = i = 0;
	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	while (text_content[i])
		i++;
	err = write(fd, text_content, i);
	if (err < 0)
		return (-1);
	close(fd);
	return (1);
}
