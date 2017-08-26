#include "libft_asm.h"
#include <stdio.h>
#include <strings.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>

#define STR		"Hello world!"
#define STR_CAT	"Hello world"
#define GREEN	"\033[1;32m"
#define RED		"\033[1;31m"
#define END		"\033[0m"

int	main(int argc, char **argv)
{
	printf(GREEN"ft_isascii = %d\n",	ft_isascii(argv[1][0]));
	printf(RED"   isascii = %d\n",			isascii(argv[1][0]));
	puts("");
//=============================================================================
	printf(GREEN"ft_isdigit = %d\n",	ft_isdigit(argv[1][0]));
	printf(RED"   isdigit = %d\n",			ft_isdigit(argv[1][0]));
	puts("");
//=============================================================================
	printf(GREEN"ft_isalpha = %d\n",	ft_isalpha(argv[1][0]));
	printf(RED"   isalpha = %d\n",			ft_isalpha(argv[1][0]));
	puts("");
//=============================================================================
	printf(GREEN"ft_isalnum = %d\n",	ft_isalnum(argv[1][0]));
	printf(RED"   isalnum = %d\n",			ft_isalnum(argv[1][0]));
	puts("");
//=============================================================================
	printf(GREEN"ft_isprint = %d\n",	ft_isprint(argv[1][0]));
	printf(RED"   isprint = %d\n",			ft_isprint(argv[1][0]));
	puts("");
//=============================================================================
	printf(GREEN"ft_tolower = %c\n",	ft_tolower(argv[1][0]));
	printf(RED"   tolower = %c\n",			ft_tolower(argv[1][0]));
	puts("");
//=============================================================================
	printf(GREEN"ft_toupper = %c\n",	ft_toupper(argv[1][0]));
	printf(RED"   toupper = %c\n",			ft_toupper(argv[1][0]));
	puts("");
//=============================================================================
	char	*var_ft_bzero = "ft_bzero";
	char	*var_bzero = "ft_bzero";

	ft_bzero(&var_ft_bzero, strlen(var_ft_bzero));
	printf(GREEN"ft_bzero = %s\n", var_ft_bzero);
	bzero(&var_bzero, strlen(var_bzero));
	printf(RED"   bzero = %s\n", var_bzero);
	puts("");
//=============================================================================
	char	var_strlen[strlen(STR)] = STR;

	printf(GREEN"ft_strlen = %lu\n", ft_strlen(var_strlen));
	printf(RED"   strlen = %lu\n", strlen(var_strlen));
	puts("");
//=============================================================================
	printf(GREEN"ft_puts =\n");
	ft_puts("Hello world !");
	printf(RED"   puts = \n");
	puts("Hello world !");
	puts("");
//=============================================================================
	char var_ft_strcat[20] = "Bonjour";
	char var_strcat[20] = "Bonjour";

	char *ft_test = ft_strcat(var_ft_strcat, STR_CAT);
	char *test = strcat(var_strcat, STR_CAT);
	printf(GREEN"ft_strcat = %s\n", ft_test);
	printf(RED"   strcat = %s\n", test);
	puts("");
//=============================================================================
	char var_ft_memset[100] = "qwerqwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbtyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb";
	char var_memset[100] = "qwerqwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbtyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb";

	ft_memset(&var_ft_memset, 'a', 100);
	memset(&var_memset, 'a', 100);
	var_ft_memset[99] = 0;
	var_memset[99] = 0;
	printf(GREEN"%s\n"END, var_ft_memset);
	printf(RED"%s\n"END, var_memset);
	puts("");
//=============================================================================
	char	var_ft_memcpy[1000] = "je suis un ordinateur lol !";
	char	var_memcpy[1000] = "je suis un ordinateur lol !";

	char *test_ft = ft_memcpy(&var_ft_memcpy, "xxxxxx", 6);
	char *test_no_ft = memcpy(&var_memcpy, "xxxxxx", 6);
	printf(GREEN"ft_memcpy = %s\n"END, test_ft);
	printf(RED"   memcpy = %s\n"END, test_no_ft);
	puts("");
//=============================================================================
	/*char	var_ft_strdup[] = "Montpellier, first mentioned in a document of 985, was founded under a local feudal dynasty, the Guilhem, who combined two hamlets and built a castle and walls around the united settlement. The two surviving towers of the city walls, the Tour des Pins and the Tour de la Babotte, were built later, around the year 1200.";*/
	/*char	var_strdup[] = "Montpellier, first mentioned in a document of 985, was founded under a local feudal dynasty, the Guilhem, who combined two hamlets and built a castle and walls around the united settlement. The two surviving towers of the city walls, the Tour des Pins and the Tour de la Babotte, were built later, around the year 1200.";*/

	/*char	*test_ft_strdup = ft_strdup(var_ft_strdup);*/
	/*char	*test_strdup = strdup(var_strdup);*/

	/*if (test_ft_strdup != NULL || test_strdup != NULL)*/
	/*{*/
		/*printf(GREEN"ft_strdup = %s\n"END, test_ft_strdup);*/
		/*printf(RED"   strdup = %s\n"END, test_strdup);*/
	/*}*/
	/*else*/
		/*printf("NULL\n");*/
	/*puts("");*/
//=============================================================================
	int fd = 0;
	fd = open(argv[2], O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "open argv2 failure !\n");
		return (-1);
	}
	ft_cat(fd);
	close(fd);
	puts("");
//=============================================================================
	char	var_ft_strclen[] = "fljkhsdlkfhkldsjhFg;dGF|ljfgsflg";

	printf(GREEN"var_ft_strclen = %ld\n"END, ft_strclen(var_ft_strclen, '|'));
	puts("");
//=============================================================================
	fd = open(argv[3], O_RDWR);
	if (fd < 0)
	{
		dprintf(2, "open argv3 failure !\n");
		return (-1);
	}
	ft_puts_fd("loullkshfgkj", fd);
	close(fd);
	puts("");
//=============================================================================
	char *var_memmalloc = (char *)ft_memmalloc(sizeof(char) * 100);

	printf(GREEN"ft_memmalloc = %s\n"END, var_memmalloc);
	puts("");
//=============================================================================
	char var_ft_strncat[20] = "loul";
	char var_strncat[20] = "loul";

	char *ft_tes = ft_strncat(var_ft_strncat, " je suis lol", 5);
	char *tes = strncat(var_strncat, " je suis lol", 5);
	printf(GREEN"ft_strncat = %s\n", ft_tes);
	printf(RED"   strncat = %s\n", tes);
	puts("");
//=============================================================================
	printf(GREEN"ft_addition(5 + 3) = %d\n"END, ft_addition(5, 3));
	puts("");
//=============================================================================
}
