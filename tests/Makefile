NAME = dummy_tests

SRC = \
	main.c \
	dummy/00_launcher.c \
	dummy/01_ok_test.c \
	dummy/02_ko_test.c \
	dummy/03_segfault_test.c \
	dummy/04_buserror_test.c \
	dummy/05_sigabrt_test.c \
	dummy/06_sigfpe_test.c \
	dummy/07_sigpipe_test.c \
	dummy/08_sigill_test.c


OBJS_DIR = OBJ

OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.c=.o))

LIBUNIT_DIR = ../framework
LIBFT_DIR = ../libft
FRAMEWORK_OBJS = \
	$(LIBUNIT_DIR)/load_tests.o \
	$(LIBUNIT_DIR)/launch_tests.o \
	$(LIBUNIT_DIR)/utils.o


CFLAGS = -Wall -Wextra -Werror -I../framework

all: $(NAME)

$(NAME): $(OBJS) $(FRAMEWORK_OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(LIBUNIT_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBFT_DIR) -lft -L$(LIBUNIT_DIR) -lunit

test: all
	@./$(NAME) || true

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(LIBUNIT_DIR) clean
	rm -fr $(OBJS_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(LIBUNIT_DIR) fclean
	rm -f $(NAME)

re: fclean all
