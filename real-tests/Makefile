CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJS_DIR = OBJS
NAME = main
LIBFT_DIR = ../libft
LIBUNIT_DIR = ../framework

SRCS =	main.c\
		ft_atoi/00_launcher.c\
       ft_atoi/01_null_char_test.c\
	   ft_atoi/02_white_spaces_test.c\
	   ft_atoi/03_multi_positive_sign.c\
	   ft_atoi/04_multi_negative_sign.c\
	   ft_atoi/05_not_digit.c\
	   ft_atoi/06_sign_between_nums.c\
	   ft_atoi/07_char_after_num.c\
	   ft_atoi/08_sign_after_num.c\
	   ft_atoi/09_signs.c\
	   ft_atoi/10_basic.c\
	   ft_atoi/11_max_int.c\
	   ft_atoi/12_min_int.c\
	   ft_atoi/13_spaces_before_num.c\
	   ft_atoi/14_different_signs.c\
	   ft_atoi/15_overflow.c\
	   ft_strncmp/00_launcher.c\
	   ft_strncmp/01_same_str.c\
	   ft_strncmp/02_null_char.c\
	   ft_strncmp/03_spaces_between_chars.c\
	   ft_strncmp/04_spaces.c\
	   ft_strncmp/05_zero_n.c\
	   ft_strncmp/06_negative_n.c\
	   ft_strncmp/07_null_in_first_str.c\
	   ft_strncmp/08_null_chars.c\
	   ft_strncmp/09_different_str.c\
	   ft_strncmp/10_ulcases.c\
	   ft_strncmp/11_num_of_letters.c\
	   ft_strncmp/12_special_chars.c\
	   ft_strncmp/13_early_null.c\
	   ft_strncmp/14_single_str.c\
	   ft_strncmp/15_taller_than.c

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(LIBUNIT_DIR)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -L$(LIBUNIT_DIR) -lunit  -o $(NAME)

test: all
	@./$(NAME) || true

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(LIBUNIT_DIR)
	rm -fr $(OBJS_DIR)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(LIBUNIT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test