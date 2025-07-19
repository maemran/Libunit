#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <sys/signal.h>
# include <errno.h>
# include "../libft/libft.h"

typedef struct s_unit_test
{
	char *name;
	int (*func)(void);
	struct s_unit_test *next;
} t_unit_test;


void	load_test(t_unit_test **list, char *name, int (*func)(void));
int	launch_tests(t_unit_test **list, char *test_function);
void 	free_tests(t_unit_test *list);
void	print_signal_result(int status);
size_t	ft_strlen(char const *s);


//tests
int		ok_test(void);
int 	ko_test(void);
int 	segfault_test(void);
int 	buserror_test(void);
int 	sigill_test(void);
int 	sigpipe_test(void);
int 	sigfpe_test(void);
int 	sigabrt_test(void);
int 	dummy_launcher(void);

#endif
