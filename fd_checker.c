#include <stdio.h>
#include <fcntl.h>
#include <sys/fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "get_next_line.h"

int main(void) {
	int fd1;
	for(int i = 0; i < 257; i++){
		fd1 = open("./test1.txt", O_RDONLY);
		printf("i : %d,  fd : %d\n", i, fd1);
	}
}
