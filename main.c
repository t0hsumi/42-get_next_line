#include <stdio.h>
#include <fcntl.h>
#include <sys/fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "get_next_line.h"

int main(void) {
	int fd1;
    char *line;

	fd1 = open("./test1.txt", O_RDONLY);
	line = get_next_line(fd1);
    do {
		printf("%s", line);
		free(line);
		line = NULL;
		line = get_next_line(fd1);
	}while (line);
}
