#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file with specified content.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (e.g., if file cannot be
 *         created, written to, or if write operation fails).
 */
int create_file(const char *filename, char *text_content)
{
	int fd;                /* File descriptor */
	ssize_t bytes_written; /* Number of bytes written to the file */
	int length = 0;        /* Length of the text content */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file with flags: O_CREAT, O_WRONLY, O_TRUNC */
	/* Create the file with permissions rw------- */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, find its length */
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

