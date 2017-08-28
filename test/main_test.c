#include "./test.h"

int	main(int argc, char **argv)
{
	simple_function(argv[1][0]);
	test_bzero();
	test_strlen();
	test_puts();
	test_strcat();
	test_memset();
	test_memcpy();
	test_strdup();
	test_cat(argv[2]);
	test_strclen();
	test_puts_fd(argv[3]);
	test_memalloc();
	test_strncat();
	test_strclr();
	test_strequ();

	return(0);
}
