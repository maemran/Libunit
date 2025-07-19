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

LIBUNIT = ../framework/libunit.a
LIBFT = ../libft/libft.a

CFLAGS = -Wall -Wextra -Werror -I../framework -I../libft

all: $(NAME)

$(NAME): $(OBJ) $(LIBUNIT) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBUNIT) $(LIBFT)

$(LIBUNIT):
	make -C ../framework

$(LIBFT):
	make -C ../libft

test: all
	@./$(NAME) || true

clean:
	rm -f $(OBJ)
	make -C ../framework clean
	make -C ../libft clean

fclean: clean
	rm -f $(NAME)
	make -C ../framework fclean
	make -C ../libft fclean

re: fclean all
