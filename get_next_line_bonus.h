/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:46:28 by tohsumi           #+#    #+#             */
/*   Updated: 2021/11/15 11:33:09 by tohsumi          ###   ########.fr       */
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
# include <limits.h>
# include <sys/types.h>

enum
{
	ERROR = -1,
	END_OF_FILE,
	NEW_LINE,
	NOT_UNTIL,
};

size_t	ft_strlen(const char *s);
char	*ft_strndup(const char *s1, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_new_line_pos(const char *s, int chr);
int		new_line(char **line, char **memo);
int		no_new_line(char **line, char **memo, char *tmp, ssize_t n);
int		get_next_line_prev(int fd, char **line);
int		my_free(char **ptr1, char **ptr2, char **ptr3, char **ptr4);
char	*get_next_line(int fd);

#endif
