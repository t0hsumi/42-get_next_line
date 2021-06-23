/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:22:06 by tohsumi           #+#    #+#             */
/*   Updated: 2021/06/22 22:15:32 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
	int fd1, fd2, fd3, fd4, fd5, fd6;
	int ret1=1, ret2=1, ret3=1, ret4=1, ret5=1, ret6=1;
	char *line;
	int i = 1;

	fd1 = open("./sample1.txt", O_RDONLY);
	fd2 = open("./sample2.txt", O_RDONLY);
	fd3 = open("./sample3.txt", O_RDONLY);
	fd4 = open("./sample4.txt", O_RDONLY);
	fd5 = open("./sample5.txt", O_RDONLY);
	fd6 = open("./sample6.txt", O_RDONLY);
	while(ret1 || ret2 || ret3 || ret4 || ret5 || ret6)
	{
		if (ret1)
		{
			ret1 = get_next_line(fd1, &line);
			printf("fd:%d	line:%d\t%s\n", fd1, i, line);
			free(line);
		}
		if (ret2)
		{
			ret2 = get_next_line(fd2, &line);
			printf("fd:%d	line:%d\t%s\n", fd2, i, line);
			free(line);
		}
		if (ret3)
		{
		ret3 = get_next_line(fd3, &line);
		printf("fd:%d	line:%d\t%s\n", fd3, i, line);
		free(line);
		}
		if (ret4)
		{
		ret4 = get_next_line(fd4, &line);
		printf("fd:%d	line:%d\t%s\n", fd4, i, line);
		free(line);
		}
		if (ret5)
		{
		ret5 = get_next_line(fd5, &line);
		printf("fd:%d	line:%d\t%s\n", fd5, i, line);
		free(line);
		}
		if (ret6)
		{
		ret6 = get_next_line(fd6, &line);
		printf("fd:%d	line:%d\t%s\n", fd6, i, line);
		free(line);
		}
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	close(fd5);
	close(fd6);
	system("leaks a.out");
	return (0);
}