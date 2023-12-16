#include "main.h"
/**
 *main - Program that copies the content of a file into another file
*@argv: input arguments
*@argc: quantity of arguments
*Return: nothing
*/
#define BUFFER_SIZE 1024
int main(int argc, char **argv)
{
int src_fd, dest_fd;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3 || (src_fd = open(argv[1], O_RDONLY)) == -1)
{
dprintf(2, argc != 3 ? "Usage: %s file_from file_to\n" : "Error: Can't read from file %s\n", argv[0]);
exit(argc != 3 ? 97 : 98);
}

if ((dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)) == -1)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
close(src_fd);
exit(99);
}

while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0 &&
(bytes_written = write(dest_fd, buffer, bytes_read)) == bytes_read);

if (bytes_read == -1 || bytes_written != bytes_read)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
close(src_fd);
close(dest_fd);
exit(99);
}

close(src_fd);
close(dest_fd);
return 0;
}
