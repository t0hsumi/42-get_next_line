/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:46:28 by tohsumi           #+#    #+#             */
/*   Updated: 2021/06/22 17:50:39 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# define FD_MAX 256

# include <stdlib.h>
# include <unistd.h>

enum
{
	ERROR = -1,
	END_OF_FILE,
	NEW_LINE,
	NOT_UNTIL,
};

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_new_line_pos(const char *s, int chr);
int		new_line(char **line, char **memo);
int		no_new_line(char **line, char **memo, char *tmp, int n);
int		get_next_line(int fd, char **line);
void	double_free(char *s1, char *s2);

#endif