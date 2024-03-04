/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigpetro <tigpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:51:34 by tigpetro          #+#    #+#             */
/*   Updated: 2024/02/16 11:51:48 by tigpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif //BUFFER_SIZE

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

char	*get_next_line(int fd);
void	ft_strjoin(char **line, char *buff);
char	*ft_strdup(char **line);
char	*ft_strchr(char *s, int c);
void	new_line(char **line, char *next_lines);
void	ft_read(int fd, char **line);

#endif //GET_NEXT_LINE_H
