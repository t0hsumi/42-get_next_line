/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:46:34 by tohsumi           #+#    #+#             */
/*   Updated: 2021/06/23 21:33:25 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_new_line_pos(const char *s, int chr)
{
	char	c;
	int		i;

	c = (char)chr;
	i = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	if (c == '\0')
		return (i);
	return (-1);
}

int	new_line(char **line, char **memo)
{
	char	*box;
	int		i;
	int		j;

	i = ft_new_line_pos(*memo, '\n');
	j = -1;
	*line = (char *)malloc(sizeof(char) * (i + 1));
	if (!*line)
		return (my_free(memo, NULL, NULL, NULL));
	ft_memcpy(*line, *memo, i);
	line[0][i] = '\0';
	box = (char *)malloc(sizeof(char) * (ft_strlen(memo[0]) - i));
	if (!box)
		return (my_free(memo, line, NULL, NULL));
	while (memo[0][i + 1 + ++j])
		box[j] = memo[0][i + 1 + j];
	box[j] = '\0';
	my_free(memo, NULL, NULL, NULL);
	*memo = ft_strdup(box);
	my_free(&box, NULL, NULL, NULL);
	if (!*memo)
		return (my_free(line, NULL, NULL, NULL));
	return (NEW_LINE);
}

int	new_line_in_tmp(char **line, char **memo, char *tmp, int pos)
{
	char	*box;
	int		i;
	int		j;

	i = -1;
	j = -1;
	*line = (char *)malloc(sizeof(char) * (ft_strlen(*memo) + pos + 1));
	box = (char *)malloc(sizeof(char) * (ft_strlen(tmp) - pos));
	if (!*line || !box)
		return (my_free(line, memo, &tmp, &box));
	while (memo[0][++i])
		line[0][i] = memo[0][i];
	while (tmp[++j] != '\n')
		line[0][i + j] = tmp[j];
	line[0][ft_strlen(*memo) + pos] = '\0';
	i = -1;
	while (tmp[pos + 1 + ++i])
		box[i] = tmp[pos + 1 + i];
	box[i] = '\0';
	my_free(memo, NULL, NULL, NULL);
	*memo = ft_strdup(box);
	if (!*memo)
		return (my_free(&box, &tmp, NULL, NULL));
	my_free(&box, &tmp, NULL, NULL);
	return (NEW_LINE);
}

int	no_new_line(char **line, char **memo, char *tmp, int n)
{
	char	*box;
	int		pos;

	pos = ft_new_line_pos(tmp, '\n');
	if (pos >= 0)
		return (new_line_in_tmp(line, memo, tmp, pos));
	box = ft_strdup(*memo);
	if (!box)
		return (my_free(memo, &tmp, NULL, NULL));
	my_free(memo, NULL, NULL, NULL);
	*memo = ft_strjoin(box, tmp);
	my_free(&box, &tmp, NULL, NULL);
	if (!*memo)
		return (ERROR);
	if (n < BUFFER_SIZE)
	{
		*line = ft_strdup(*memo);
		if (!line)
			return (my_free(memo, NULL, NULL, NULL));
		my_free(memo, NULL, NULL, NULL);
		return (END_OF_FILE);
	}
	return (NOT_UNTIL);
}

int	get_next_line(int fd, char **line)
{
	ssize_t		n;
	int			flag;
	static char	*memo[FD_MAX];
	char		*tmp;

	flag = 2;
	if (fd < 0 || fd >= FD_MAX || !line || BUFFER_SIZE <= 0)
		return (ERROR);
	if (!memo[fd])
		memo[fd] = ft_strdup("");
	if (!memo[fd])
		return (my_free(&memo[fd], NULL, NULL, NULL));
	while (flag == 2)
	{
		if (ft_new_line_pos(memo[fd], '\n') != -1)
			return (new_line(line, &memo[fd]));
		tmp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
		n = read(fd, tmp, BUFFER_SIZE);
		if (n == -1)
			return (my_free(&tmp, &memo[fd], NULL, NULL));
		tmp[n] = 0;
		flag = no_new_line(line, &memo[fd], tmp, n);
	}
	return (flag);
}
