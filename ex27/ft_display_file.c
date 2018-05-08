/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikotvits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:12:22 by ikotvits          #+#    #+#             */
/*   Updated: 2018/03/19 20:12:23 by ikotvits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 1

#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	b[1];

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		while ((read(fd, b, BUF_SIZE)) > 0)
			write(1, &b, 1);
		close(fd);
	}
	return (0);
}
