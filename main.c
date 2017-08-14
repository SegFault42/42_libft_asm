#include "./libft_asm.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (ft_isascii(argv[1][0]) == 0)
		printf("0\n");
	else
		printf("1\n");
}
