#include "libft_asm.h"
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

#define STR		"Hello world!"
#define GREEN	"\033[1;32m"
#define RED		"\033[1;31m"
#define END		"\033[0m"

int	main(int argc, char **argv)
{
	char	*var_ft_bzero = "ft_bzero";
	char	*var_bzero = "ft_bzero";
	char	var_strlen[strlen(STR)] = STR;

	printf(GREEN"ft_isascii = %d\n",	ft_isascii(argv[1][0]));
	printf(RED"   isascii = %d\n",			isascii(argv[1][0]));
	puts("");

	printf(GREEN"ft_isdigit = %d\n",	ft_isdigit(argv[1][0]));
	printf(RED"   isdigit = %d\n",			ft_isdigit(argv[1][0]));
	puts("");

	printf(GREEN"ft_isalpha = %d\n",	ft_isalpha(argv[1][0]));
	printf(RED"   isalpha = %d\n",			ft_isalpha(argv[1][0]));
	puts("");

	printf(GREEN"ft_isalnum = %d\n",	ft_isalnum(argv[1][0]));
	printf(RED"   isalnum = %d\n",			ft_isalnum(argv[1][0]));
	puts("");

	printf(GREEN"ft_isprint = %d\n",	ft_isprint(argv[1][0]));
	printf(RED"   isprint = %d\n",			ft_isprint(argv[1][0]));
	puts("");

	printf(GREEN"ft_tolower = %c\n",	ft_tolower(argv[1][0]));
	printf(RED"   tolower = %c\n",			ft_tolower(argv[1][0]));
	puts("");

	printf(GREEN"ft_toupper = %c\n",	ft_toupper(argv[1][0]));
	printf(RED"   toupper = %c\n",			ft_toupper(argv[1][0]));
	puts("");

	ft_bzero(&var_ft_bzero, strlen(var_ft_bzero));
	printf(GREEN"ft_bzero = %s\n", var_ft_bzero);
	bzero(&var_bzero, strlen(var_bzero));
	printf(RED"   bzero = %s\n", var_bzero);
	puts("");

	printf(GREEN"ft_strlen = %lu\n", ft_strlen(var_strlen));
	printf(RED"   strlen = %lu\n", strlen(var_strlen));
	puts("");

	printf(GREEN"ft_puts =\n");
	ft_puts("Hello world !");
	printf(RED"   puts = \n");
	puts("Hello world !");

	char var_strcat[20] = "test";

	char *test = ft_strcat(var_strcat, " lol");
	printf("%s\n", var_strcat);
}
