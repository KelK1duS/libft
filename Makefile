CC= gcc
CFLAGS= -Wall -Werror -Wextra
LDFLAGS= -L. -lft -lbsd

SRCS=	ft_isalpha.c ft_isdigit.c ft_alnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c
OBJ= $(subst .c,.o,$(SRCS))

NAME= libft.a
EXEC= exec

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc libft.a $^
	ranlib $(NAME)

.c.o:
	$(CC) $(SRCS) -c $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(EXEC)

re: fclean all clean

build: all
	$(CC) main.c -o $(EXEC) $(LDFLAGS)

run: fclean all build
	./$(EXEC) "H3ll0-W0rld"

.PHONY: all .c.o clean fclean re