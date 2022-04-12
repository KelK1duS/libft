CC=gcc
CFLAGS= -Wall -Werror -Wextra

SRCS= ft_strlen.c ft_isalpha.c ft_isdigit.c ft_alnum.c
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
	$(CC) main.c -L. -lft -o $(EXEC)

run: fclean all build
	./$(EXEC) "H3ll0-W0rld"

.PHONY: all .c.o clean fclean re