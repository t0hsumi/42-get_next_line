#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char **argv){
	int fd1, fd2, fd3, fd4, fd5, fd6;
	char *line;
	FILE *output1, *output2, *output3, *output4, *output5, *output6;
	int ret1, ret2, ret3, ret4, ret5, ret6;

	if (argv[argc-1][0] == '1')
	{
		fd1 = open("./sample1.txt", O_RDONLY);
		output1 = fopen("sample1_ans.txt", "w");
		if (!output1)
		{
			printf("cannot open\n");
			exit(1);
		}
		do
		{
			ret1 = get_next_line(fd1, &line);
			if (ret1)
				fprintf(output1, "%s\n", line);
			else if (!ret1)
				fprintf(output1, "%s", line);
			free(line);
		} while (ret1);
		close(fd1);
		fclose(output1);
	}
	if (argv[argc-1][0] == '2')
	{
		fd2 = open("./sample2.txt", O_RDONLY);
		output2 = fopen("sample2_ans.txt", "w");
		if (!output2)
		{
			printf("cannot open\n");
			exit(2);
		}
		do
		{
			ret2 = get_next_line(fd2, &line);
			if (ret2)
				fprintf(output2, "%s\n", line);
			else if (!ret2)
				fprintf(output2, "%s", line);
			free(line);
		} while (ret2);
		close(fd2);
		fclose(output2);
	}
	if (argv[argc-1][0] == '3')
	{
		fd3 = open("./sample3.txt", O_RDONLY);
		output3 = fopen("sample3_ans.txt", "w");
		if (!output3)
		{
			printf("cannot open\n");
			exit(3);
		}
		do
		{
			ret3 = get_next_line(fd3, &line);
			if (ret3)
				fprintf(output3, "%s\n", line);
			else if (!ret3)
				fprintf(output3, "%s", line);
			free(line);
		} while (ret3);
		close(fd3);
		fclose(output3);
	}
	if (argv[argc-1][0] == '4')
	{
		fd4 = open("./sample4.txt", O_RDONLY);
		output4 = fopen("sample4_ans.txt", "w");
		if (!output4)
		{
			printf("cannot open\n");
			exit(4);
		}
		do
		{
			ret4 = get_next_line(fd4, &line);
			if (ret4)
				fprintf(output4, "%s\n", line);
			else if (!ret4)
				fprintf(output4, "%s", line);
			free(line);
		} while (ret4);
		close(fd4);
		fclose(output4);
	}
	if (argv[argc-1][0] == '5')
	{
		fd5 = open("./sample5.txt", O_RDONLY);
		output5 = fopen("sample5_ans.txt", "w");
		if (!output5)
		{
			printf("cannot open\n");
			exit(5);
		}
		do
		{
			ret5 = get_next_line(fd5, &line);
			if (ret5)
				fprintf(output5, "%s\n", line);
			else if (!ret5)
				fprintf(output5, "%s", line);
			free(line);
		} while (ret5);
		close(fd5);
		fclose(output5);
	}
	if (argv[argc-1][0] == '6')
	{
		fd6 = open("./sample6.txt", O_RDONLY);
		output6 = fopen("sample6_ans.txt", "w");
		if (!output6)
		{
			printf("cannot open\n");
			exit(6);
		}
		do
		{
			ret6 = get_next_line(fd6, &line);
			if (ret6)
				fprintf(output6, "%s\n", line);
			else if (!ret6)
				fprintf(output6, "%s", line);
			free(line);
		} while (ret6);
		close(fd6);
		fclose(output6);
	}
	//system("leaks a.out");
	return (0);
}
