CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJS_DIR = OBJS
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))
LIBFT_DIR = ../libft
test = real_tests

all: $(test)

$(test): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(test)

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -fr $(OBJS_DIR)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(test)

re: fclean all

.PHONY: all clean fclean re