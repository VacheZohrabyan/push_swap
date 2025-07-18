NAME 		= 		push_swap

CC 			=		cc

CFLAGS 		=		-Wall -Wextra -Werror

HEADER 		=		ft_push_swap.h	

LIBFT_A     = 		libft.a

LIBFT_SRCS  = 		libft/ft_split.c libft/ft_strjoin.c libft/ft_strdup.c libft/ft_atoi.c

LIBFT_OBJS  = 		$(LIBFT_SRCS:.c=.o)

COBJS 		= 		$(SRCS:.c=.o)

SRCS 		=		src/ft_chack/ft_chack_element.c \
					src/main.c \
					src/ft_chack/ft_node_push_pop.c \
					src/ft_chack/ft_utils.c \
					src/ft_sort/ft_stack_sort.c \
					src/ft_chack/ft_size_node.c \
					src/ft_chack/ft_command.c \
					src/ft_free/ft_free.c \
					src/ft_chack/ft_rotation.c \
					src/ft_chack/ft_reverse_rotation.c \
					src/ft_sort/ft_is_sorted.c \
					src/ft_sort/push_swap.c \
					src/ft_sort/ft_finder.c \
					libft/ft_split.c \
					libft/ft_strjoin.c \
					libft/ft_strdup.c \
					libft/ft_atoi.c \


all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_A): $(LIBFT_OBJS)
	ar rcs $(LIBFT_A) $(LIBFT_OBJS)

$(NAME): $(COBJS) $(LIBFT_A)
	$(CC) $(CFLAGS) $(COBJS) $(LIBFT_A) -o $(NAME)

clean:
	rm -rf $(COBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIBFT_A)

re: fclean all

.PHONY: fclean all clean re