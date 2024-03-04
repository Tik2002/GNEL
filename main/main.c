/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigpetro <tigpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:38:17 by tigpetro          #+#    #+#             */
/*   Updated: 2024/02/19 20:10:28 by tigpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../get_next_line.h"
#include <string.h>

void gnl(int fd, char * str)
{
	char * line;


	line = get_next_line(fd);
	if (!line && !str)
	{
		printf("null\n");
		printf("null line %s\n", line);
	}
	else
	{
		printf("%d\n", !strcmp(line, str));
		printf("line %s\n", line);
	}
	free(line);
}

int main()
{
	int fd = open("/Users/tigpetro/Desktop/42cursus/get_next_line/file", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));

	// gnl(fd, "\n");
	// gnl(fd, NULL);
	// system("leaks a.out");
	close(fd);

}
