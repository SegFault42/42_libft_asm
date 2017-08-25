/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:26:51 by rabougue          #+#    #+#             */
/*   Updated: 2017/08/25 02:16:45 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 10

void	ft_putchar_fd(char c, int fd)
{
	if (fd == 1)
		write(1, &c, 1);
	else if (fd == 2)
		write(2, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		++i;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	if (argc == 1)
		ft_putstr_fd("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr_fd("Too many arguments.\n", 2);
	else
	{
		fd = open(argv[1], O_RDONLY);
		close(fd);
		while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
		{
			buff[ret] = '\0';
			ft_putstr_fd(buff, 1);
		}
	}
	return (0);
}
