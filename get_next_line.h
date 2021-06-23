/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:46:28 by tohsumi           #+#    #+#             */
/*   Updated: 2021/06/23 15:03:08 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

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
int		my_free(void *ptr1, void *ptr2, void *ptr3, void *ptr4);

#endif