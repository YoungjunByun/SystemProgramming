#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAXLEN 80

int main(void) {
    int fd;
    int readn = 0;
    char buf[MAXLEN];

    fd = open("fly1.txt", O_RDWR | O_CREAT);
    if (fd < 0) {
        perror("Open error");
        return 1;
    }
    memset(buf, 0x00, MAXLEN);
    while (readn = read(fd, buf, MAXLEN-1) > 0) {
        printf("%s", buf);
    }

    return 0;
}