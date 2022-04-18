CC= gcc
CFLAGS= -Wall -Werror -Wextra
LDFLAGS= -L. -lft -lbsd

SRCS=	ft_isalpha.c ft_isdigit.c ft_alnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c \
		ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c \
		ft_tolower.c ft_toupper.c \
		ft_strchr.c ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c ft_strdup.c
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
	rm -rf $(NAME) $(EXEC) .vscode/

re: fclean all clean

build: all
	$(CC) main.c -o $(EXEC) $(LDFLAGS)

run: fclean all build
	./$(EXEC) "H3ll0-W0rld"

.PHONY: all .c.o clean fclean re