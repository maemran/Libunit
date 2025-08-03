/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:25:16 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 15:25:17 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# define FLAG 0

# include "../libft/libft.h"
# include <errno.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/signal.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct s_unit_test
{
	char				*name;
	int					(*func)(void);
	struct s_unit_test	*next;
}						t_unit_test;

void					load_test(t_unit_test **list, char *name,
							int (*func)(void));
int						launch_tests(t_unit_test **list, char *test_function);
void					free_tests(t_unit_test *list);
void					print_signal_result(int status);
int						print_test_nums(int passed, int total);

// tests
int						ok_test(void);
int						ko_test(void);
int						segfault_test(void);
int						buserror_test(void);
int						sigill_test(void);
int						sigpipe_test(void);
int						sigfpe_test(void);
int						sigabrt_test(void);
int						dummy_launcher(void);

#endif
