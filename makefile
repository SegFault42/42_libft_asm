# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabougue <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 21:31:16 by rabougue          #+#    #+#              #
#    Updated: 2017/08/28 04:48:11 by rabougue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

SRC =	./source/ft_puts.s\
		./source/ft_bzero.s\
		./source/ft_cat.s\
		./source/ft_strlen.s\
		./source/ft_strcat.s\
		./source/ft_memset.s\
		./source/ft_memcpy.s\
		./source/ft_strdup.s\
		./source/ft_isascii.s\
		./source/ft_isdigit.s\
		./source/ft_isalpha.s\
		./source/ft_isalnum.s\
		./source/ft_isprint.s\
		./source/ft_tolower.s\
		./source/ft_toupper.s\
		\
		./source/ft_putstr.s\
		./source/ft_putstr_len.s\
		./source/ft_strclen.s\
		./source/ft_puts_fd.s\
		./source/ft_memmalloc.s\
		./source/ft_strncat.s\
		./source/ft_strclr.s\
		./source/ft_strequ.s\

OBJS = $(SRC:.s=.o)

ASM_COMPILER = nasm -f macho64

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJS): ./source%.o: ./source%.s
	$(ASM_COMPILER) $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

# unit test compilation : gcc test/main_test.c test/simple_function.c ./libfts.a
