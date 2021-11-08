#include <stdio.h>
#include <fcntl.h>
#include <sys/fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "get_next_line_bonus.h"

int main(void) {
	int fd;
    char *line;

	open("./test2.txt", O_RDONLY);
	open("./test1.txt", O_RDONLY);
    while (1){
		printf("fd : ");
		scanf("%d", &fd);
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
		line = NULL;
	}
}
