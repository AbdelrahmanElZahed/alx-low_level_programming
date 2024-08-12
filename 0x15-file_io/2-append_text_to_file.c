#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure (e.g., if the file does not exist,
 *         if you do not have the required permissions, or if writing fails).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;                /* File descriptor */
	ssize_t bytes_written; /* Number of bytes written to the file */
	int length = 0;        /* Length of the text content */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);
	/* Open the file in append mode, do not create if it does not exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, find its length and write it */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		/* Write the content to the file */
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close(fd);

	/* Return 1 on success */
	return (1);
}

