/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:57:51 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 14:24:47 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void print_test_formate(char *test_function, char *test_name)
{
	if (!test_function)
		write(1, "\033[33mTEST:\033[0m ", 16);
	else
		write (1, test_function, ft_strlen(test_function));
	write(1, test_name, ft_strlen(test_name));
	write(1, " : ", 3);
}

static int	run_test(t_unit_test *test, char *test_function, t_unit_test *head)
{
	pid_t	pid;
	int		status;
	int		ret;
	int (*temp)(void);

	temp = test->func;
	print_test_formate(test_function, test->name);
	pid = fork();
	if (pid == 0)
	{
		free_tests(head);
		exit(temp());
	}
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
	t_unit_test	*head;
	int			total;
	int			passed;

	head = *list;
	total = 0;
	passed = 0;
	while (*list)
	{
		passed += run_test(*list, test_function, head);
		total++;
		*list = (*list)->next;
	}
	*list = head;
	free_tests(*list);
	if (!print_test_nums(passed, total))
		return (-2);
	if (passed == total)
		return (0);
	return (-1);
}
