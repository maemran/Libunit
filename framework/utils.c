/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:07:29 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 15:19:26 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	print_test_nums(int passed, int total)
{
	char	*passed_str;
	char	*total_str;

	passed_str = ft_itoa(passed);
	if (!passed_str)
		return (0);
	total_str = ft_itoa(total);
	if (!total_str)
	{
		free(passed_str);
		return (0);
	}
	write(1, "\n", 1);
	ft_putstr_fd("\033[0;32m", 1);
	ft_putstr_fd(passed_str, 1);
	write(1, "/ ", 1);
	ft_putstr_fd(total_str, 1);
	ft_putstr_fd(" tests checked\n", 1);
	ft_putstr_fd("\033[0m", 1);
	free(passed_str);
	free(total_str);
	return (1);
}

void	free_tests(t_unit_test *list)
{
	t_unit_test	*tmp;

	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}

void	print_signal_result(int status)
{
	int	sig;

	if (WIFSIGNALED(status))
	{
		sig = WTERMSIG(status);
		if (sig == SIGSEGV)
			write(1, "\033[31m[SEGV]\033[0m\n", 17);
		else if (sig == SIGBUS)
			write(1, "\033[31m[BUS]\033[0m\n", 16);
		else if (sig == SIGABRT)
			write(1, "\033[31m[ABRT]\033[0m\n", 17);
		else if (sig == SIGFPE)
			write(1, "\033[31m[FPE]\033[0m\n", 16);
		else if (sig == SIGPIPE)
			write(1, "\033[31m[PIPE]\033[0m\n", 17);
		else if (sig == SIGILL)
			write(1, "\033[31m[ILL]\033[0m\n", 16);
		else
			write(1, "\033[31m[SIGNAL]\033[0m\n", 19);
	}
	else if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		write(1, "\033[32m[OK]\033[0m\n", 15);
	else
		write(1, "\033[31m[KO]\033[0m\n", 15);
}
