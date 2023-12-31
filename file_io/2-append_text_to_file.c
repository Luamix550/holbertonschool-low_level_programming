#include "main.h"
/**
 * append_text_to_file - append text to the end of file
 * @filename: name of file to be readed
 * @text_content: the text that will be appended.
 * Return: 2 success, otherwise 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND);

if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
bytes_written = write(file_descriptor, text_content, strlen(text_content));

if (bytes_written == -1)
{
close(file_descriptor);
return (-1);
}
}

close(file_descriptor);
return (1);
}
