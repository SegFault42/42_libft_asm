#include "../include/libft_asm.h"
#include <stdio.h>
#include <strings.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>

#define LEN_BZERO	10
#define LEN_MEMMALLOC	100
#define STR_CAT		"Hello world"

#define PURPLE		"\033[1;35m"
#define GREEN		"\033[1;32m"
#define RED			"\033[1;31m"
#define END			"\033[0m"

void	simple_function(char c);
void	test_bzero();
void	test_strlen();
void	test_puts();
void	test_strcat();
void	test_memset();
void	test_memcpy();
void	test_strdup();
void	test_cat(char *arg);
void	test_strclen();
void	test_puts_fd(char *arg);
void	test_memalloc();
void	test_strncat();
void	test_strclr();
void	test_strequ();
