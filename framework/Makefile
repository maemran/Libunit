NAME = libunit.a

SRCS = load_tests.c launch_tests.c utils.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -g
LIBFT_DIR = ../libft
LIBFT_OBJS = $(LIBFT_DIR)/ft_itoa.o  $(LIBFT_DIR)/ft_strdup.o $(LIBFT_DIR)/ft_strlen.o $(LIBFT_DIR)/ft_putstr_fd.o

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	ar rcs $(NAME) $(OBJS) $(LIBFT_OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
