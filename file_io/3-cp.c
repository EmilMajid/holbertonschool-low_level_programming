#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t bytes_read;
    char buffer[1024];

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        exit(99);
    }

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) {
        if (bytes_read == -1) {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close(fd_from);
            close(fd_to);
            exit(98);
        }

        ssize_t total_written = 0;
        while (total_written < bytes_read) {
            ssize_t bytes_written = write(fd_to, buffer + total_written, bytes_read - total_written);
            if (bytes_written == -1) {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                close(fd_from);
                close(fd_to);
                exit(99);
            }
            total_written += bytes_written;
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    if (close(fd_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}
