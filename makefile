NAME = libft_asm.a

SRC =	./source/ft_isascii.s\
		./source/ft_isdigit.s\
		./source/ft_isalpha.s\
		./source/ft_isalnum.s\
		./source/ft_isprint.s\
		./source/ft_tolower.s\
		./source/ft_toupper.s\
		./source/ft_bzero.s\

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
	gcc -o test main.c ./libft_asm.a -I ./include/
