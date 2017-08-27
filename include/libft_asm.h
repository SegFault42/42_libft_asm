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
int		ft_puts(char *str);
int		ft_puts_fd(char *str, int fd);
void	ft_putstr(char *str);
void	ft_putstr_len(char *str, size_t len);
size_t	ft_strlen(char *str);
size_t	ft_strclen(char *str, char c);
char	*ft_strdup(const char *str);
void	ft_bzero(void *buff, size_t size);
void	ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t size);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	ft_cat(int fd);
void	*ft_memmalloc(size_t size);
void	ft_strclr(char *s);
int		ft_strequ(char *s1, char *s2);

#endif
