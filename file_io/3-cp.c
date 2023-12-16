#include "main.h"

#define BUFFER_SIZE 1024

int main(int argc, char **argv) {
    int src_fd, dest_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    src_fd = open(argv[1], O_RDONLY);

    if (src_fd == -1) {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

    if (dest_fd == -1) {
        dprintf(2, "Error: Can't write to file %s\n", argv[2]);
        close(src_fd);
        exit(99);
    }

    while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(dest_fd, buffer, bytes_read);

        if (bytes_written == -1 || bytes_written != bytes_read) {
            dprintf(2, "Error: Can't write to file %s\n", argv[2]);
            close(src_fd);
            close(dest_fd);
            exit(99);
        }
    }

    if (bytes_read == -1) {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        close(src_fd);
        close(dest_fd);
        exit(98);
    }

    close(src_fd);
    close(dest_fd);
    return 0;
}