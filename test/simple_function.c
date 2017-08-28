#include "./test.h"

void	simple_function(char c)
{
	printf(PURPLE"=========================simple function=====================\n"END);
	printf(GREEN"ft_isascii = %d\n",	ft_isascii(c));
	printf(RED"   isascii = %d\n",			isascii(c));
	puts("");
//=============================================================================
	printf(GREEN"ft_isdigit = %d\n",	ft_isdigit(c));
	printf(RED"   isdigit = %d\n",			ft_isdigit(c));
	puts("");
//=============================================================================
	printf(GREEN"ft_isalpha = %d\n",	ft_isalpha(c));
	printf(RED"   isalpha = %d\n",			ft_isalpha(c));
	puts("");
//=============================================================================
	printf(GREEN"ft_isalnum = %d\n",	ft_isalnum(c));
	printf(RED"   isalnum = %d\n",			ft_isalnum(c));
	puts("");
//=============================================================================
	printf(GREEN"ft_isprint = %d\n",	ft_isprint(c));
	printf(RED"   isprint = %d\n",			ft_isprint(c));
	puts("");
//=============================================================================
	printf(GREEN"ft_tolower = %c\n",	ft_tolower(c));
	printf(RED"   tolower = %c\n",			ft_tolower(c));
	puts("");
//=============================================================================
	printf(GREEN"ft_toupper = %c\n",	ft_toupper(c));
	printf(RED"   toupper = %c\n"END,			ft_toupper(c));
//=============================================================================
}

void	test_bzero()
{
	printf(PURPLE"=============================test_bzero======================\n"END);
	char	var_ft_bzero[LEN_BZERO] = "_ft_bzero";
	char	var_bzero[LEN_BZERO] = "_ft_bzero";


	printf(GREEN"ft_bzero (before) = %s\n", var_ft_bzero);
	printf(RED"   bzero (before)= %s\n", var_bzero);

	ft_bzero(&var_ft_bzero, LEN_BZERO);
	puts("");
	printf(GREEN"ft_bzero (after) = ");
	for (int i = 0; i < LEN_BZERO -1; ++i)
	{
		if (var_ft_bzero[i] == 0)
			printf(GREEN"%c", '0');
		else
			printf("%c", var_ft_bzero[i]);
	}
	printf("\n"END);

	printf(RED"   bzero (after) = ");
	bzero(&var_bzero, LEN_BZERO);
	for (int i = 0; i < LEN_BZERO -1; ++i)
	{
		if (var_bzero[i] == 0)
			printf(RED"%c", '0');
		else
			printf("%c", var_bzero[i]);
	}
	printf("\n"END);
	puts("");
}

void	test_strlen()
{
	printf(PURPLE"=============================test_strlen=====================\n"END);
	char	var_strlen[16] = "__HELLO_WORLD__";

	printf(GREEN"ft_strlen = %lu\n", ft_strlen(var_strlen));
	printf(RED"   strlen = %lu\n", strlen(var_strlen));
	puts("");
}

void	test_puts()
{
	printf(PURPLE"=============================test_puts=======================\n"END);
	printf(GREEN"ft_puts =\n");
	ft_puts("Hello world !");
	printf(RED"   puts = \n");
	puts("Hello world !");
	puts("");
}

void	test_strcat()
{
	printf(PURPLE"=============================test_strcat=====================\n"END);
	char var_ft_strcat[30] = "Bonjour";
	char var_strcat[30] = "Bonjour";

	char *ft_test = ft_strcat(var_ft_strcat, STR_CAT);
	char *test = strcat(var_strcat, STR_CAT);
	printf(GREEN"ft_strcat = %s\n", ft_test);
	printf(RED"   strcat = %s\n", test);
	puts("");
}

void	test_memset()
{
	printf(PURPLE"=============================test_memset=====================\n"END);
	char var_ft_memset[100] =	"qwerqwertyuiopasdfghjkxcvbnmqwertyuiopasdfghjklzxcvbtyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb";
	char var_memset[100] =		"qwerqwertyuiopasdfghjkxcvbnmqwertyuiopasdfghjklzxcvbtyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb";

	printf(GREEN"var_ft_memset (before) = %s\n", var_ft_memset);
	printf(RED"   var_memset (before) = %s\n", var_memset);
	puts("");

	ft_memset(&var_ft_memset, 'a', 99);
	memset(&var_memset, 'a', 99);

	printf(GREEN"var_ft_memset (after) = %s\n"END, var_ft_memset);
	printf(RED"   var_memset (after) = %s\n"END, var_memset);
	puts("");
}

void	test_memcpy()
{
	printf(PURPLE"=============================test_memcpy=====================\n"END);
	char	var_ft_memcpy[1000] = "je suis un ordinateur lol !";
	char	var_memcpy[1000] = "je suis un ordinateur lol !";

	char *test_ft = ft_memcpy(&var_ft_memcpy, "xxxxxx", 6);
	char *test_no_ft = memcpy(&var_memcpy, "xxxxxx", 6);
	printf(GREEN"ft_memcpy = %s\n"END, test_ft);
	printf(RED"   memcpy = %s\n"END, test_no_ft);
	puts("");
}

void	test_strdup()
{
	printf(PURPLE"=============================test_strdup=====================\n"END);
	char	var_ft_strdup[] = "Montpellier, first mentioned in a document of 985, was founded under a local feudal dynasty, the Guilhem, who combined two hamlets and built a castle and walls around the united settlement. The two surviving towers of the city walls, the Tour des Pins and the Tour de la Babotte, were built later, around the year 1200.";
	char	var_strdup[] = "Montpellier, first mentioned in a document of 985, was founded under a local feudal dynasty, the Guilhem, who combined two hamlets and built a castle and walls around the united settlement. The two surviving towers of the city walls, the Tour des Pins and the Tour de la Babotte, were built later, around the year 1200.";

	char	*test_ft_strdup = ft_strdup(var_ft_strdup);
	char	*test_strdup = strdup(var_strdup);

	if (test_ft_strdup != NULL || test_strdup != NULL)
	{
		printf(GREEN"ft_strdup = %s\n"END, test_ft_strdup);
		printf(RED"   strdup = %s\n"END, test_strdup);
	}
	else
		printf("NULL\n");
	puts("");
}

void test_cat(char *arg)
{
	printf(PURPLE"=============================test_cat=======================\n"END);
	int fd = 0;
	fd = open(arg, O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "open argv2 failure !\n");
		exit (-1);
	}
	ft_cat(fd);
	close(fd);
	puts("");
}

void	test_strclen()
{
	printf(PURPLE"=============================test_cat=======================\n"END);
	char	var_ft_strclen[] = "fljkhsdlkfhkldsjhFgodGF|ljfgsflg";

	printf(GREEN"var_ft_strclen = %ld\n"END, ft_strclen(var_ft_strclen, '|'));
	puts("");
}

void	test_puts_fd(char *arg)
{
	printf(PURPLE"=============================test_puts_fd====================\n"END);
	int fd = open(arg, O_RDWR);
	if (fd < 0)
	{
		dprintf(2, "open argv3 failure !\n");
		exit (-1);
	}
	ft_puts_fd("Je peux ecrire dans n'importe qu'elle fd", fd);
	close(fd);
	printf(GREEN"cat argv[3]\n"END);
	puts("");
}

void	test_memalloc()
{
	printf(PURPLE"============================test_memalloc====================\n"END);
	char *var_memmalloc = (char *)ft_memmalloc(sizeof(char) * LEN_MEMMALLOC);

	printf(GREEN"ft_memmalloc = %s"END, var_memmalloc);
	for (int i = 0; i < LEN_MEMMALLOC -1; ++i)
	{
		if (var_memmalloc[i] == 0)
			printf(GREEN"%c", '0');
		else
			printf("%c", var_memmalloc[i]);
	}
	printf("\n"END);
	puts("");
}

void	test_strncat()
{
	printf(PURPLE"============================test_strncat=====================\n"END);
	char var_ft_strncat[20] = "loul";
	char var_strncat[20] = "loul";

	char *ft_tes = ft_strncat(var_ft_strncat, " je suis lol", 5);
	char *tes = strncat(var_strncat, " je suis lol", 5);
	printf(GREEN"ft_strncat = %s\n", ft_tes);
	printf(RED"   strncat = %s\n", tes);
	puts("");
}

void	test_strclr()
{
	printf(PURPLE"============================test_strclr======================\n"END);
	char	*var_strclr = malloc(100);

	ft_memset(var_strclr, 'a', 99);
	printf(GREEN"var_strclr (before clear) = %s\n"END, var_strclr);
	ft_strclr(var_strclr);
	printf(GREEN"var_strclr  (after clear) = "END);
	for (int i = 0; i < 99; ++i)
		printf(GREEN"%c"END, var_strclr[i]);
	puts("");
	puts("");
}

void	test_strequ()
{
	printf(PURPLE"============================test_strequ======================\n"END);
	char *strequ_1 = "abcde";
	char *strequ_2 = "abcde";

	char *strequ_3 = "abvde";
	char *strequ_4 = "abcde";

	printf(GREEN"ft_strequ = %d\n\n"END, ft_strequ(strequ_1, strequ_2));
	printf(GREEN"ft_strequ = %d\n"END, ft_strequ(strequ_3, strequ_4));
}
