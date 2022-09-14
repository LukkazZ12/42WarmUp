NAME = ft_display_file

CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_display_file.c

OBJECTS = $(SOURCES: .c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SOURCES)

clean:
	rm -f *.o

fclean: clean
	rm $(NAME)

re: fclean all