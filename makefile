# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabougue <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 21:31:16 by rabougue          #+#    #+#              #
#    Updated: 2017/08/18 05:17:08 by rabougue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

SRC =	./source/ft_isascii.s\
		./source/ft_isdigit.s\
		./source/ft_isalpha.s\
		./source/ft_isalnum.s\
		./source/ft_isprint.s\
		./source/ft_tolower.s\
		./source/ft_toupper.s\
		./source/ft_bzero.s\
		./source/ft_strlen.s\

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

test:
	gcc -o test main_test.c $(NAME) -I ./include/
