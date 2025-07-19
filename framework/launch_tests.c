/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:57:51 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 09:31:04 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	run_test(t_unit_test *test, char *test_function)
{
	pid_t	pid;
	int		status;
	int		ret;

	if (!test_function)
		write(1, "TEST: ", 6);
	else
		write (1, test_function, ft_strlen(test_function));
	write(1, test->name, ft_strlen(test->name));
	write(1, " : ", 3);
	pid = fork();
	if (pid == 0)
		exit(test->func());
	if (pid > 0)
	{
		wait(&status);
		print_signal_result(status);
		if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
			ret = 1;
		else
			ret = 0;
		return (ret);
	}
	return (0);
}

int	launch_tests(t_unit_test **list, char *test_function)
{
	t_unit_test	*cur;
	int			total;
	int			passed;

	cur = *list;
	total = 0;
	passed = 0;
	while (cur)
	{
		passed += run_test(cur, test_function);
		total++;
		cur = cur->next;
	}
	write (1, "\n", 1);
	ft_putstr_fd("\033[0;32m", 1);
	ft_putstr_fd(ft_itoa(passed), 1);
	write (1, "/ ", 1);
	ft_putstr_fd(ft_itoa(total), 1);
	ft_putstr_fd(" tests checked\n", 1);
	ft_putstr_fd ("\033[0m", 1);
	if (passed == total)
		return (0);
	return (-1);
}
