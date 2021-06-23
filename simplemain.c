#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void){
	int fd;
	char *line;
	int ret;

	fd = open("sample7.txt", O_RDONLY);
	do
	{
		ret = get_next_line(fd, &line);
		if (ret)
			printf("%s\n", line);
		else if (!ret)
			printf("%s", line);
		free(line);
		line = NULL;
	} while (ret);
	close(fd);
	return(0);
}