/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:57:51 by rsham             #+#    #+#             */
/*   Updated: 2025/07/18 14:44:00 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	run_test(t_unit_test *test)
{
	pid_t	pid;
	int		status;
	int		ret;

	write(1, "TEST: ", 6);
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

int	launch_tests(t_unit_test **list)
{
	t_unit_test	*cur;
	int			total;
	int			passed;

	cur = *list;
	total = 0;
	passed = 0;
	while (cur)
	{
		passed += run_test(cur);
		total++;
		cur = cur->next;
	}
	write(1, "\n", 1);
	if (passed == total)
		return (0);
	return (-1);
}
