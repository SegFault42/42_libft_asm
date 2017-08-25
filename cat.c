#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_cat(int fd);

int	main(int ac, const char **av)
{
	ft_cat(0);
	ft_cat(open(__FILE__, O_RDONLY));
	ft_cat(open(av[0], O_RDONLY));
	ft_cat(-42);
	ft_cat(open(av[1], O_RDONLY));
	int fd = open(av[1], O_RDONLY);
	if (fd > 0)
	{
		close(fd);
		ft_cat(fd);
	}
	(void)ac;
	(void)av;
	return (0);
}
