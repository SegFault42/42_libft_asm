#include "libft_asm.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *var_bzero = "ft_bzero";

	printf("ft_isascii = %d\n", ft_isascii(argv[1][0]));
	printf("ft_isdigit = %d\n", ft_isdigit(argv[1][0]));
	printf("ft_isalpha = %d\n", ft_isalpha(argv[1][0]));
	printf("ft_isalnum = %d\n", ft_isalnum(argv[1][0]));
	printf("ft_isprint = %d\n", ft_isprint(argv[1][0]));
	printf("ft_tolower = %c\n", ft_tolower(argv[1][0]));
	printf("ft_toupper = %c\n", ft_toupper(argv[1][0]));
	ft_bzero(var_bzero, 8);
	printf("bzero = %s\n", var_bzero);
}
