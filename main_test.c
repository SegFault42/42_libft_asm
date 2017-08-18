#include "libft_asm.h"
#include <stdio.h>
#include <strings.h>

int	main(int argc, char **argv)
{
	char	*var_bzero = "ft_bzero";
	char test[10] = "lol";

	printf("ft_isascii = %d\n", ft_isascii(argv[1][0]));
	printf("ft_isdigit = %d\n", ft_isdigit(argv[1][0]));
	printf("ft_isalpha = %d\n", ft_isalpha(argv[1][0]));
	printf("ft_isalnum = %d\n", ft_isalnum(argv[1][0]));
	printf("ft_isprint = %d\n", ft_isprint(argv[1][0]));
	printf("ft_tolower = %c\n", ft_tolower(argv[1][0]));
	printf("ft_toupper = %c\n", ft_toupper(argv[1][0]));
	printf("bzero before = %s\n", var_bzero);
	ft_bzero(&var_bzero, strlen(var_bzero));
	printf("bzero after = %s\n", var_bzero);
	printf("strlen = %d\n", ft_strlen(test));
	/*printf("strcat before = %s\n", test);*/
	/*ft_strcat(test, "lil");*/
	/*printf("strcat after = %s\n", test);*/
}
