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

OBJ = $(SRC:.c=.o)
LIBUNIT_DIR = ../framework
FRAMEWORK_OBJS = \
	$(LIBUNIT_DIR)/load_tests.o \
	$(LIBUNIT_DIR)/launch_tests.o \
	$(LIBUNIT_DIR)/utils.o

CFLAGS = -Wall -Wextra -Werror -I../framework

all: $(NAME)

$(NAME): $(OBJ) $(FRAMEWORK_OBJS)
	$(MAKE) -C $(LIBUNIT_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(LIBUNIT_DIR) -lunit

test: all
	@./$(NAME) || true

clean:
	$(MAKE) -C $(LIBUNIT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBUNIT_DIR) fclean
	rm -f $(NAME)

re: fclean all
