NAME = libft.a

PATH_SRC = ./srcs/
PATH_INCLUDE = ./includes/
GCCFLAGS = -Wall -Wextra -Werror

SRCS = $(addprefix $(PATH_SRC), \
	ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c)

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	gcc $(GCCFLAGS) -I $(PATH_INCLUDE) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all