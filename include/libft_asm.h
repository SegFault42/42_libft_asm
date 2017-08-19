#ifndef LIBFT_ASM_H
# define LIBFT_ASM_H

#include <stdlib.h>

int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_bzero(void *buff, size_t size);
char	*ft_strcat(char *dst, const char *src);
size_t	ft_strlen(char *str);
int		ft_puts(char *str);

#endif
